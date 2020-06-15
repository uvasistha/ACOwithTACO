# Trust Calculation with Ant Colony Optimization in Online Social Networks
Ant Colony Optimization  for Trust Calculation


UTKARSH (001411001004, ITE188068)
ROHIT KUMAR (001411001061, ITE188006)

Contents

1. Introduction ... 5
2. Trust and Reputation System ... 6
3. Swarm Intelligence … 8
3.1 Swarm Intelligence Model … 9
4. ANT Colony Optimization … 10
4.1 THE DOUBLE BRIDGE EXPERIMENT ...10
4.2 Algorithm of ACO … 13
4.3 Observation … 17
5. A comparison between Dijkstra algorithm and ACO … 18
6. Future Work … 22
7. Conclusion … 23
8. References … 24

1. INTRODUCTION
Online Social Networks (OSNs) have become an integral part of
daily life in recent years. They have been used as a means for a

rich variety of activities, such as seeking service providers or
recommendations. In these activities, trust is one of the most
important factors for participants’ decision-making process.
Therefore, it is necessary and significant to predict the trust
between two participants who have no direct interactions. My
project aims to provide effective and efficient trust prediction
approaches to evaluate trust values, which are introduced from
the following four aspects. The first aspect of the work is to
study the factors that affect trust in OSNs and solve the trust
network extraction problem. OSNs contain important
participants, the trust relations between participants, and the
contexts in which participants interact with each other. All of
such information has a significant influence on the prediction of
the trust from a source participant to a target participant without
direct interactions. In addition, the trust network, containing a
truster and a trustee without direct interactions, is the foundation
to perform trust prediction. The extraction of a small-scale trust
subnetwork can deliver efficient and effective trust prediction
results. We propose a metaheuristic optimization technique ANT
Colony optimization for the extraction of such subnetworks.

2. TRUST AND REPUTATION SYSTEMS
Notion of Trust

Manifestations of trust are easy to recognise because we
experience and rely on it every day, but at the same time trust is
quite challenging to define because it manifests itself in many
different forms. The literature on trust can also be quite
confusing because the term is being used with a variety of
meanings [46]. Two common definitions of trust which we will
call reliability trust and decision trust respectively will be used
in this study.
Reliability Trust is the subjective probability by which an
individual, A, expects that another individual, B, performs a
given action on which its welfare depends. Decision Trust is the
extent to which one party is willing to depend on something or
somebody in a given situation with a feeling of relative security,
even though negative consequences are possible.
Notion of Reputation
Reputation is what is generally said or believed about a person’s
or thing’s character or standing. This definition corresponds well
with the view of social network researchers that reputation is a
quantity derived from the underlying social network which is
globally visible to all members of the network. The difference
between trust and reputation can be illustrated by the following
perfectly normal and plausible statements:
(1) “I trust you because of your good reputation.”
(2) “I trust you despite your bad reputation.”

Trust and Reputation Systems

There are two fundamental differences between traditional and
online environments regarding how trust and reputation are, and
can be, used. Firstly, as already mentioned, the traditional cues
of trust and reputation that we are used to observe and depend
on in the physical world are missing in online environments, so
that electronic substitutes are needed. Secondly, communicating
and sharing information related to trust and reputation is
relatively difficult, and normally constrained to local
communities in the physical world, whereas IT systems
combined with the Internet can be leveraged to design extremely
efficient systems for exchanging and collecting such information
on a global scale.
Motivated by this basic observation, the purposes of research in
trust and reputation systems should be to:
a. Find adequate online substitutes for the traditional cues to
trust and reputation that we are used to in the physical world,
and identify new information elements (specific to a particular
online application) which are suitable for deriving measures of
trust and reputation.
b. Take advantage of IT and the Internet to create efficient
systems for collecting that information, and for deriving
measures of trust and reputation, in order to support decision
making and to improve the quality of online markets.
These simple principles invite rigorous research in order to
answer some fundamental questions: What information elements
are most suitable for deriving measures of trust and reputation in

a given application? How can these information elements be
captured and collected? What are the best principles for
designing such systems from a theoretic and from a usability
point of view? Can they be made resistant to attacks of
manipulation by strategic agents? How should users include the
information provided by such systems into their decision
process? What role can these systems play in the business model
of commercial companies? Do these systems truly improve the
quality of online trade and interactions? These are important
questions that need good answers in order to determine the
potential for trust and reputation systems in online
environments.

3 SWARM INTELLIGENCE
A swarm is a large number of homogenous, simple agents
interacting locally among themselves, and their environment,
with no central control to allow a global interesting behaviour to
emerge. Swarm-based algorithms have recently emerged as a
family of nature-inspired, population-based algorithms that are
capable of producing low cost, fast, and robust solutions to
several complex problems . Swarm Intelligence (SI) can
therefore be defined as a relatively new branch of Artificial
Intelligence that is used to model the collective behaviour of
social swarms in nature, such as ant colonies, honey bees, and
bird flocks. Although these agents (insects or swarm
individuals) are relatively unsophisticated with limited
capabilities on their own,

they are interacting together with certain behavioural patterns to
cooperatively achieve tasks necessary for their survival. The
social interactions among swarm individuals can be either direct
or indirect . Examples of direct interaction are through visual or
audio contact, such as the waggle dance of honey bees. Indirect
interaction occurs when one individual changes the environment
and the other individuals respond to the new environment, such
as the pheromone trails of ants that they deposit on their way to
search for food sources. This indirect type of interaction is
referred to as stigmergy, which essentially means
communication through the environment.

3.1 Swarm Intelligence (SI) Models
Swarm intelligence models are referred to as computational
models inspired by natural swarm systems. To date, several
swarm intelligence models based on different natural swarm
systems have been proposed in the literature, and successfully
applied in many real-life applications. Examples of swarm
intelligence models are: Ant Colony Optimization, Particle
Swarm Optimization , Artificial Bee Colony , Bacterial Foraging
, Cat Swarm Optimization , Artificial Immune System , and
Glowworm Swarm Optimization . In this paper, we will
primarily focus on one of the most popular swarm intelligences
models, namel, Ant Colony Optimization .

4. Ant Colony Optimization(ACO)
The ant colony optimization algorithm (ACO), is a probabilistic
technique for solving computational problems which can be
reduced to finding good paths through graphs. This algorithm is
a member of ant colony algorithms family, in swarm intelligence
methods,the first algorithm was aiming to search for an optimal
path in a graph; based on the behavior of ants seeking a path
between their colony and a source of food. The original idea has
since diversified to solve a wider class of Numerical problems,
and as a result, several problems have emerged, drawing on
various aspects of the behavior of ants

4.1 THE DOUBLE BRIDGE EXPERIMENT
The ants begin by walking randomly. They cannot see the
ground and have a very limited view of what is around them.
Therefore, if the ground has not been explored yet, they will just
wander and take random decision at each crossroads. After a
while, the places around the nest will be all explored. The ants
will get to know that by the marking done by the previous ants.
Indeed, they will leave behind them the famous pheromones and
inform the other ants that the way is already explored.

The concentration of pheromones depends on the number of ants
who took the way, the more ants taking the way, the more
pheromones. The configuration is as shown in figure 1.1: the
nest of a colony of ants is connected to the food via two bridges
of the same length. In such a setting, ants start to explore the
surroundings of the nest and eventually reach the food source.
Along their path between food source and nest, ants deposit
pheromones. Initially, each ant randomly chooses one of the two
bridges. However, due to random fluctuations, after some time
one of the two bridges presents a higher concentration of
pheromones than the other and, therefore, attracts more ants.
This brings a further amount of pheromone on that bridge
making it more attractive with the result that after some time the
whole colony converges toward the use of the same bridge

Defining Ant Solution
Ant meta-heuristic ACO deployed in three inner processes that
is ‘construct solution’, ‘update pheromone’ and ‘Daemon
action’. All three processes can describe in following ways :-
(a) Construct ant Solution
Ant apply decision policy between neighbour vertices,
decision is carried out with the help of probabilistic rule on
arcs.
(b) Update Pheromone
Deposit new pheromone on arc attract ants to choose that
path, hence it increase probability that a particular
connection is used by many ants. Pheromone evaporation
prevents ants to use suboptimal region and explore new
search space.

(a) Local Updating
Let τ be pheromone between neighbour nodes local update
carried out following way
T(i,j)= (1-Q)T(i,j) Q-rate of pheromone evaporation

(b) Globally Update
After evaporation has been applied to all arcs pheromone is
updating global way.

T(i,j)= (1-Q)T(i,j) + delτ
where delτ is total amount of pheromone deposited on all arc
(edge)

(c) Daemon Actions (Optional)

Among N number of path daemon action chose few or single
path which is optimal solution in present iteration and also allow
deposit more pheromone on particular path. Next Figure denote
automata5 model of ant Meta Heuristic with four states.
Machine is start from initialize data and it can be stop either
pheromone update of daemon action (which is optional).

An ant will move from node i to node j with probability
pi,j = (τ α i,j )(η β i,j ) /P(τ α i,j )(η β i,j )
where ,
τi,j is the amount of pheromone on edge i, j
α is a parameter to control the influence of τi,j
ηi,j is the desirability of edge i, j (typically 1/di,j )
β is a parameter to control the influence of ηi,j

4.2 ALGORITHM

In this section we proposing algorithm for calculating trust
cycle.
(1) Data Initialization following terms are use in data
initialization.
(a) User Activity Matrix (d)
It shows how much activity share between two users. Assign
weight in previous table to calculate activity share
between users.
(b) Social Intimacy Pheromone
We discussed it in earlier section.
(c) Alpha, Beta
Relative influence with lies according to different ant systems
such as ant colony system, max-min ant system, Rank
based ant system, Elist based ant system.
(d) Number of ants ‘A’
Total numbers of ants for start the procedure.
(e) Number of buyer node B
Number of user node who looking for trustworthy service.

Trust Calculation Algorithm

♦Initialization:
a. Set initial parameters that are system: variable, states,
function, input, output, input trajectory, output trajectory.
b. Set initial pheromone trails value.
c. Each ant is individually placed on initial state with empty
memory.
♦While termination conditions not meet do
a. Construct Ant Solution: Each ant constructs a path by
successively applying the transition function the probability
of moving from state to state depend on: as the
attractiveness of the move, and the trail level of the move.
b. Apply Local Search
c. Best Tour check:
If there is an improvement, update it.
d. Update Trails:
- Evaporate a fixed proportion of pheromone on each road
.- For each ant perform the “ant-cycle” pheromone update.
- Reinforce the best tour with a set number of “elitist ants”
performing the “ant-cycle”
e. Create a new population by applying the following
operation, based on pheromone trails. The operations are
applied to individual(s) selected from the population with a
probability based on fitness.
End While

The working of ACO metaheuristic

CO PROBLEM

Solution
Component

Pheromone
Model

Probablistic
Solution
Construction

Pheromone
value update

Initialization of
pheromone value

4.3 Observation
Considering a small graph , we have observed the ACO
algorithm to find the best path between seller and buyer on
online social network that work as a dynamic consumer
relationship management (CRM) system which allow business
people to analyze customer behavior and conversation on social
networking.
We have taken an input file of 10 nodes with their probalility
trust . We have considered 1000 ants in the system. The value of
Alpha factor is 1.0 and beta factor is 2.5. The evaporation rate
defined is 0.00001 and deposition factor is 0.00005.

5

0 1 3 8 9

2 4 6

The graph G
7

Upon applying the ACO algorithm to this graph , we get
following as a result considering 0 as seller and rest node as
buyer.
The paths we get using ACO are :-
0-&gt;1
0-&gt;2
0-&gt;1-&gt;3
0-&gt;1-&gt;4
0-&gt;1-&gt;5
0-&gt;1-&gt;4-&gt;6
0-&gt;1-&gt;4-&gt;7
0-&gt;1-&gt;3-&gt;8
0-&gt;1-&gt;3-&gt;8-&gt;9

5. A comparison between Dijkstra algorithm and
ACO
Dijkstra algorithm
Dijkstra’s Algorithm is a graph search algorithm that solves the
single-source shortest path problem for a graph with
nonnegative edge path costs, producing a shortest path tree. This
algorithm is often used in routing and other network related
protocols. For a given source vertex (node) in the graph, the
algorithm finds the path with lowest cost (i.e. the shortest path)
between that vertex and every other vertex. It can also be used
for finding costs of shortest paths from a single vertex to a single
destination vertex by stopping the algorithm once the shortest
path to the destination vertex has been determined. For example,
if the vertices of the graph represent cities and edge path costs
represent driving distances between pairs of cities connected by
a direct road, Dijkstra&#39;s algorithm can be used to find the
shortest route between one city and all other cities.
Alogorithm
1) Create a set sptSet (shortest path tree set) that keeps track of
vertices included in shortest path tree, i.e., whose minimum
distance from source is calculated and finalized. Initially, set is
empty.
2) Assign a distance value to all vertices in the input graph.
Initialize all distance values as INFINITE. Assign distance val
as 0 for the source vertex so that it is picked first.

3) While sptSet doesn’t include all vertices
a) Pick a vertex u which is not there in sptSet and has minimum
distance value.
b) Include u to sptSet.
c) Update distance value of all adjacent vertices of u. To update
the distance values, iterate through all adjacent vertices. For
every adjacent vertex v, if sum of distance value of u (from
source) and weight of edge u-v, is less than the distance value of
v, then update the distance value of v.
Comparision
The below data conducts to a conclusion that well known
method of shortest path routing such Dijkstra algorithm is better
then new, alternative methods (in this case ACO algorithm).
Besides, it has to be told, that in the case of ACO algorithm only
the best obtained route is presented. This method does not
guarantee any optimality, so there is a problem with the
repeatability too. Every single use of ACO algorithm can result
other solution.
For given 20 nodes Graph ,we devise :-
Algorith
m

ANT Route’s
length

Time Complexit

y
ACO 1000 9 0.04217 O(n2)
Dijkstra 1000 11 0.83451 O(n3)

The discussion about these two algorithms can be based on
information deduced. Few important features were taken into
consideration. First of all, the most important question is if the
algorithm can guarantee the optimality. Dijkstra algorithm is
always able to find a shortest, optimal path . ACO algorithm
very often chooses other suboptimal paths , so doesn’t guarantee
optimality. Besides, the alternative way requires more execution
time.

Dijkstra ACO
Guarantee optimality Yes No
Computational
complexibility

O(n2 ) O(n3 )
Time Shorter Longer
Distances From source to all

others

From source to
destination

Numbering of nodes Free Almost free (source
must be 1, destination
must be n)
Route repeatibility Yes No

Comparison view between Dijkstra and ACO

There is a lot of proposals of solving a problem of shortest path
routing. One of the most popular ways to solve is Dijkstra
algorithm. Sometimes, if classical methods are not able to find a
solution or have some difficulties, other alternative ones can be
used. ACO algorithm based on the theory of artificial ants is one

of such ideas. It’s able to find a suboptimal route. A comparison
between these two algorithms was made. The research prove
that Dijkstra algorithm is a better way to solve the problem of
shortest path routing in graph. It’s faster, guarantees optimality
and has less computational complexilibity.

6. FUTURE WORK

ACO is supposed to be a swarm intelligence based learning
algorithm which has been widely used for various optimisation
problems.
 From a data mining stand point, its one of the best
performing evolutionary algorithms in the domain of
feature selection and rule mining
 A lot of authors have explored the use of ACO in
bioinformatics.Hybrid ACO algorithms have been reported
of giving high classification accuracies for massive
bioinformatics optimisation problems(Models for Cancer
Classification ).
 ACO can be applied to some interesting problems like
Credit Risk Management,inferring business rules etc.
 Data Mining with an Ant Colony Optimisation Algorithm
is also used by formation of Antminer.
 ACO is a recently proposed metaheuristic approach for
solving hard combinatorial optimization problems
 ACO shows great performance with the “ill-structured”
problems like network routing.

7. Conclusion

We introduced here a search methodology based on a
distributed autocatalytic process and its application to the
solution of a classical optimization problem. The general
idea underlying the Ant System paradigm is that of a
population of agents each guided by an autocatalytic
process directed by a greedy force. Were an agent alone,
the autocatalytic process and the greedy force would tend
to make the agent converge to a suboptimal tour with
exponential speed. When agents interact it appears that the
greedy force can give the right suggestions to the
autocatalytic process and facilitate quick convergence to
very good, often optimal, solutions without getting stuck in
local optima. We have speculated that this behavior could
be due to the fact that information gained by agents during
the search process is used to modify the problem
representation and in this way to reduce the region of the
space considered by the search process. Even if no tour is
completely excluded, bad tours become highly improbable,
and the agents search only in the neighborhood of good
solutions.
Ant Colony Optimization has been and
continues to be a fruitful paradigm for designing effective
combinatorial optimization solution algorithms. After more
than ten years of studies, both its application effectiveness
and its theoretical groundings have been demonstrated,
making ACO one of the most successful paradigm in the
metaheuristic area.

8. References

1. M. Dorigo, Ant colony optimization web page,
http://iridia.ulb.ac.be/mdorigo/ACO/ACO.html.
2. N. Ascheuer (1995) Hamiltonian path problems in the on-line
optimization of flexible manufacturing systems. Ph.D.Thesis,
Technische Universität Berlin, Germany
3. M. E. Bergen P.van Beek, T. Carchrae (2001) Constraint-
based assembly line sequencing, Lecture Notes in Computer
Science, 2056:88-99
4. L. Bianchi, L.M. Gambardella, M. Dorigo (2002) An ant
colony optimization approach to the probabilistic traveling
salesman problem. In Proceedings of PPSN-VII, Seventh
International Conference on Parallel Problem Solving from
Nature, Lecture Notes in Computer Science. Springer Verlag,
Berlin, Germany, pp 883-892
5. E. Bonabeau, M. Dorigo, G. Theraulaz (2000) Nature,
406(6791):39-42
6. J.L. Bentley (1992) Fast algorithms for geometric traveling
salesman problem, ORSA Journal on Computing, 4:387-411
7. B. Bullnheimer, R.F. Hartl, C. Strauss (1999) Applying the
ant system to the vehicle routing problem, In: Voss S., Martello
S., Osman I.H., Roucairol C. (eds.) MetaHeuristics: Advances
and Trends in Local Search Paradigms for Optimization,
Kluwer, Boston, pp 285-296

8. B. Bullnheimer, R.F. Hartl, C. Strauss (1999) A new rank-
based version of the ant system: a computational study, Central
European Journal of Operations Research 7(1):25-38
9. C. N. Bendtsen, T. Krink (2002) Phone routing using the
dynamic memory model, In Proceedings of the 2002 congress
on Evolutionary Computation, Honolulu, USA, pp 992-997
10. C. Blum, M. Sampels (2002) Ant colony optimization for
FOP shop scheduling: a case study on different pheromone
representations, In Proceedings of the 2002 congress on
Evolutionary Computation, Honolulu, USA, pp 1558-1563
11. T. Bäck, H.-P. Schwefel (1993) An overview of evolutionary
algorithms for parameter optimization, Evolutionary
Computation 1(1):1-23
12. M. den Besten, T. Stützle, M. Dorigo (2000) Ant colony
optimization for the total weighted tardiness problem, In
Proceedings Parallel Problem Solving from Nature: 6th
international conference, Lecture Notes in Computer Science.
Springer Verlag, Berlin, Germany, pp 611-620
13. A. Colorni, M. Dorigo, V. Maniezzo (1991) Distributed
optimization by ant colonies, In Proceedings of ECAL&#39;91
European Conference on Artificial Life, Elsevier Publishing,
Amsterdam, The Netherlands, pp 134-142
