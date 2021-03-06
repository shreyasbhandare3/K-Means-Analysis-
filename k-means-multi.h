#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cmath>

using namespace std;

//***********************************************************************
// class Cluster_instance declaration
//***********************************************************************
class Cluster_instance {

	// private class variables
	
	// private methods

public:
	// public class variables
    vector <float> vfAttribute;
    string sClassification;

	// public methods
	Cluster_instance(void); // constructor

}; // class Cluster_instance

//***********************************************************************
// class Cluster declaration
//***********************************************************************
class Cluster {

	// private class variables
	
	// private methods

public:
	// public class variables
    vector<Cluster_instance> vclThe_cluster;

	// public methods
	Cluster(void); // constructor

}; // class Cluster

//***********************************************************************
// class Cluster_set declaration
//***********************************************************************
class Cluster_set {

	// private class variables
    vector<Cluster> vclThe_cluster_set;
	vector< vector<float> > vvfMeans;
	vector< vector<float> > vvfOld_means;
	int iK_count;
	string sIn_file;
	string sOut_file;
	float fTolerance;
	Cluster vclInput_data;
	int iIteration;
	int iAttribute_ct;
	bool bUseLabels;
	
	// private methods
	void Read_input_data(void);
    void Write_output_data(void);
	void Setup_cluster_set(void);
	void Identify_mean_values(void);
	void Cluster_data(void);
	void Calculate_cluster_means(void);
	bool Compare_mean_values(void);

public:
	// public class variables

	// public methods
	Cluster_set(void); // constructor
	void Read_control_data(string sControlFilename);
	void Execute_clustering(void);

}; // class Cluster_set

