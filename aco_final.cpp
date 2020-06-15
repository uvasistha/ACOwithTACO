//------------------------------------------------------IMPORTS-------------------------------------------------------------------------

#include<iostream>

#include<math.h>

#include <bits/stdc++.h>

#include <string>

#include <sstream>

#include<stdio.h>

#include<string>

#define ll long long int

//constant value for algorithm
# define ANT 10 // number of ants
# define alpha 1.0 //constant set to value 1
# define beta 2.5 //constant set to value 2.5
# define EVAP 0.00001 //EVAPORATION RATE
# define DEP 0.00005 //DEPOSTION VALUE


//------------------------------------------------------HEADERS--------------------------------------------------------------------------														


// function declaration 
void aco();
void init();
void print();

using namespace std;

//------------------------------------------------------DATA STRUCTURE USED-------------------------------------------------------------------------	

//NODE for graph
class Node {
  public:
    ll val;
  double wt1, wt2;
  double prob;
  Node * next;

  Node(ll a, double b) {
    val = a;
    wt1 = 1.0, wt2 = b;
    next = NULL;
    prob = 0.0;
  }

};

//List adjancey
class List {
  public:
    Node * front;
  Node * back;

  List() {
    front = NULL;
    back = NULL;
  }

  void push(ll a, double b) {
    Node * x = new Node(a, b);
    if (front == NULL) {
      front = x;
      back = x;
    } else {
      back -> next = x;
      back = back -> next;
    }
  }

  ll pop() {
    ll t = front -> val;
    Node * x = front;
    if (front -> next == NULL) {
      front = NULL;
      back = NULL;
    } else
      front = front -> next;
    delete x;
    return t;
  }

  bool empty() {
    if (front == NULL && back == NULL)
      return 1;
    return 0;
  }
};

//Graph
class Graph {
  public:
    List * adjlist;

  Graph(ll N) {
    adjlist = new List[N];
  }
};

						
//------------------------------------------------------GLOBAL-------------------------------------------------------------------------	


//GLobal variables
Graph * g;
ll N=10, M;
ll B; //N nodes and M edges
ll ant[ANT + 5];

						
//------------------------------------------------------MAIN CODE-------------------------------------------------------------------------	



//Main function
int main() {
  ll i;
  N = 10;
  cout << "_______________________________________________\n";
  cout << "______________ACO TRUST CALCULATION____________\n";
  cout << "_______________________________________________\n";
  cout << "\n";
    cout << "\n";
  	cout << "Total number of nodes   			  : " << N;cout << "\n";
	cout << "Total number of ANT     			  : " << ANT;cout << "\n";
    cout << "alpha                    			  : " << beta;cout << "\n";
    cout << "beta                    			  : " << beta;cout << "\n";
    cout << "EVAPORATION RATE		        	  : " << EVAP;cout << "\n";
    cout << "DEPOSTION VALUE          			  : " << DEP;cout << "\n";
    cout << "INPUT FILE FOR NETWORK   			  : " << "inputfile.txt";cout << "\n";
    cout << "INITIAL PHEROMONE FOR USER ACTIVITY  : " << "0.1";cout << "\n";
    cout << "OUTPUT FILE WITH TRUST CALULATION    : " << "outputfile.txt";cout << "\n";
  cout << "\n";
  cout << "\n";
  g = new Graph(N);

  //file ip and change to integer
  int count = 0;
  fstream file;
  string word, t, q, filename;
  int conv = 0;

  // filename of the file
  filename = "inputfile.txt";

  // opening file
  file.open(filename.c_str());
  int a = 0, b = 0;

  // extracting words form the file
  while (file >> word) {
    conv = atoi(word.c_str());
    if (count == 2) {
      g -> adjlist[a].push(b, 0.1);
      count = 0; 
    }
    a = b;
    b = conv;
    count++;
  }
  g -> adjlist[a].push(b, 0.1);
  file.close();

  cout << "\n";
  cout << "\n";
  cout << "------------------------------------------------\n";
  cout << "----------------TRUST INITIAL-------------------\n";
  cout << "------------------------------------------------\n";
  cout << "\n";
  cout << "\n";
  print();
  aco();
  cout << "\n";
  cout << "\n";
  cout << "------------------------------------------------\n";
  cout << "----------------TRUST FNIAL---------------------\n";
  cout << "------------------------------------------------\n";
  cout << "\n";
  cout << "\n";
  print();
  return 0;
}



//------------------------------------------------------ACO ALGORITHM-------------------------------------------------------------------------	




//Main ACO algorithm
void aco() {
  for (ll i = 0; i < N; i++) // for N-1 iterations
  {
    for (ll j = 0; j < ANT; j++) //for all ANT 
    {
      ll current_ant = ant[j]; //ant array postion of ants				
      
      	//PART A:-
      	//calculating probablities for each neighbour
     	//LOOP 1 : to get numerator of trust equation and total sum of probablities for bayes theorem
      double sum = 0;
      Node * temp = g -> adjlist[current_ant].front; // temp is thefirst negibour
      while (temp != NULL) {
        double probab = pow(temp -> wt1, alpha) * pow(temp -> wt2, beta);
        //double probab=temp->wt1*temp->wt2; //normal bayes theorem
        temp -> prob = probab;
        sum += probab;
        temp = temp -> next; //for all its neighbour node 
      }
      	//LOOP 2 : to calculate final probablities of each neighbour and find max trust path	
      temp = g -> adjlist[current_ant].front; // temp is the first negibour
      	//initialization to find max trust path
      double max = temp -> prob / sum; //set max to probab to 1st neighbour i.t temp
      ll next = temp -> val; //set next path to choose as temp
      while (temp != NULL) {
        temp -> prob /= sum;
        if (max < temp -> prob) {
          max = temp -> prob;
          next = temp -> val;
        }

        /** Negative Handler
			if((1-EVAP)*temp->wt1<0) // so that wt1 and hence probablity is not negative
        	temp->wt1=0;
        	temp->wt1=(1-EVAP)*temp->wt1;//pheromone evaporation 	
			*/ 	
											
        temp = temp -> next; //for all its neighbour node 
      }
     
	 
	 	//PART B:-
		//UPDATE OF PHERONOME AND NEXT ANT POSITIONS

     	 //deposit on edge i to j																	
      temp = g -> adjlist[current_ant].front;
      while (temp != NULL) {
        if (temp -> val == next) {
          temp -> wt1 = DEP; //pheromone deposited on trusted path
          break;
        }
        temp = temp -> next;
      }
      	//deposit on edge j to i		
      temp = g -> adjlist[next].front;
      while (temp != NULL) {
        if (temp -> val == current_ant) {
          temp -> wt1 = DEP; //pheromone deposited on trusted path
          break;
        }
        temp = temp -> next;
      }

      ant[j] = next;
    }
  }
}



//------------------------------------------------------UTILS-------------------------------------------------------------------------	


//utiliy functions 

//init:-> intializing the buyer nodes with ants
void init() {
  //place ANT ants on buyer nodes i
  for (ll i = 0; i < ANT; i++)
    ant[i] = B;
}

//print:-> printing the adjacency list
void print() {
  ofstream myfile;
  myfile.open("outputfile.txt");
  for (ll i = 0; i < N; i++) {
    cout << " NODE       :    " << i << "\n";
    cout << " Neighbour  : " << " Trust" << "\n";
    Node * temp = g -> adjlist[i].front;
    while (temp != NULL) {

      cout <<"     "<< temp -> val << "      =    " << temp -> prob << "\n";
      myfile << i << " " << temp -> val << " " << temp -> prob << "\n";
      temp = temp -> next;
    }
    
  }
  myfile.close();

}
int stringtoint(string s) {
  int i = 0, num = 0;
  while (s[i] != '\0') {
    num = num * 10 + s[i] - '0';
    i++;
  }
  return num;
}
