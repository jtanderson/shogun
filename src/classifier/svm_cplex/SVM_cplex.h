#ifndef _SVMCplex_H___
#define _SVMCplex_H___

#ifdef SVMCPLEX

#include "hmm/HMM.h"
#include "svm/SVM.h"
#include "lib/Observation.h"

#define SVM_CPLEX_VERSION "1.0"

class CSVMCplex:public CSVM
{
public:

    CSVMCplex();
    virtual ~CSVMCplex();

    virtual bool svm_train(CObservation* train, int kernel_type, double C);
    virtual bool svm_test(CObservation* test, FILE* output, FILE* rocfile);
    virtual bool load_svm(FILE* svm_file, CObservation* test);
    virtual bool save_svm(FILE* svm_file);

protected:
    void top_feature(int x, double * feature_vector) ;
    double *w, b;

};


#endif // SVMCPLEX

#endif // _SVMCplex_H__
