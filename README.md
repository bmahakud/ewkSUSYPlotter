Plotter code for Multilepton SUSY

The code is developed to plot and do analysis using the heppy trees and friend trees. It is very flexible and saves a lot of time in acessing variables and plotting various stuff.

One can provide inputs in the following files 
InputDetailsNTuple.dat
InputDetailsFriendV1.dat
InputDetailsFriendV2.dat

and then you have to run the setup using the command ./Setup. Then the plotter creates several codes in order to access differnt variables , make histograms automatically . You do not need to create any histograms manually or write for loops. After running the setup you should run the Analyzer.C to see the output histograms.

`
root -l Analyzer.C
`






