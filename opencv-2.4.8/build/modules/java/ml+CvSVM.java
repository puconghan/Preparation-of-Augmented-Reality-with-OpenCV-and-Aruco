
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.ml;

import org.opencv.core.Mat;

// C++: class CvSVM
//javadoc: CvSVM
public class CvSVM extends CvStatModel {

    protected CvSVM(long addr) { super(addr); }


    public static final int
            C_SVC = 100,
            NU_SVC = 101,
            ONE_CLASS = 102,
            EPS_SVR = 103,
            NU_SVR = 104,
            LINEAR = 0,
            POLY = 1,
            RBF = 2,
            SIGMOID = 3,
            C = 0,
            GAMMA = 1,
            P = 2,
            NU = 3,
            COEF = 4,
            DEGREE = 5;


    //
    // C++:   CvSVM::CvSVM()
    //

    //javadoc: CvSVM::CvSVM()
    public   CvSVM()
    {
        
        super( CvSVM_0() );
        
        return;
    }


    //
    // C++:   CvSVM::CvSVM(Mat trainData, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), CvSVMParams params = CvSVMParams())
    //

    //javadoc: CvSVM::CvSVM(trainData, responses, varIdx, sampleIdx, params)
    public   CvSVM(Mat trainData, Mat responses, Mat varIdx, Mat sampleIdx, CvSVMParams params)
    {
        
        super( CvSVM_1(trainData.nativeObj, responses.nativeObj, varIdx.nativeObj, sampleIdx.nativeObj, params.nativeObj) );
        
        return;
    }

    //javadoc: CvSVM::CvSVM(trainData, responses)
    public   CvSVM(Mat trainData, Mat responses)
    {
        
        super( CvSVM_2(trainData.nativeObj, responses.nativeObj) );
        
        return;
    }


    //
    // C++:  void CvSVM::clear()
    //

    //javadoc: CvSVM::clear()
    public  void clear()
    {
        
        clear_0(nativeObj);
        
        return;
    }


    //
    // C++:  int CvSVM::get_support_vector_count()
    //

    //javadoc: CvSVM::get_support_vector_count()
    public  int get_support_vector_count()
    {
        
        int retVal = get_support_vector_count_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  int CvSVM::get_var_count()
    //

    //javadoc: CvSVM::get_var_count()
    public  int get_var_count()
    {
        
        int retVal = get_var_count_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  float CvSVM::predict(Mat sample, bool returnDFVal = false)
    //

    //javadoc: CvSVM::predict(sample, returnDFVal)
    public  float predict(Mat sample, boolean returnDFVal)
    {
        
        float retVal = predict_0(nativeObj, sample.nativeObj, returnDFVal);
        
        return retVal;
    }

    //javadoc: CvSVM::predict(sample)
    public  float predict(Mat sample)
    {
        
        float retVal = predict_1(nativeObj, sample.nativeObj);
        
        return retVal;
    }


    //
    // C++:  void CvSVM::predict(Mat samples, Mat& results)
    //

    //javadoc: CvSVM::predict(samples, results)
    public  void predict_all(Mat samples, Mat results)
    {
        
        predict_all_0(nativeObj, samples.nativeObj, results.nativeObj);
        
        return;
    }


    //
    // C++:  bool CvSVM::train(Mat trainData, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), CvSVMParams params = CvSVMParams())
    //

    //javadoc: CvSVM::train(trainData, responses, varIdx, sampleIdx, params)
    public  boolean train(Mat trainData, Mat responses, Mat varIdx, Mat sampleIdx, CvSVMParams params)
    {
        
        boolean retVal = train_0(nativeObj, trainData.nativeObj, responses.nativeObj, varIdx.nativeObj, sampleIdx.nativeObj, params.nativeObj);
        
        return retVal;
    }

    //javadoc: CvSVM::train(trainData, responses)
    public  boolean train(Mat trainData, Mat responses)
    {
        
        boolean retVal = train_1(nativeObj, trainData.nativeObj, responses.nativeObj);
        
        return retVal;
    }


    //
    // C++:  bool CvSVM::train_auto(Mat trainData, Mat responses, Mat varIdx, Mat sampleIdx, CvSVMParams params, int k_fold = 10, CvParamGrid Cgrid = CvSVM::get_default_grid(CvSVM::C), CvParamGrid gammaGrid = CvSVM::get_default_grid(CvSVM::GAMMA), CvParamGrid pGrid = CvSVM::get_default_grid(CvSVM::P), CvParamGrid nuGrid = CvSVM::get_default_grid(CvSVM::NU), CvParamGrid coeffGrid = CvSVM::get_default_grid(CvSVM::COEF), CvParamGrid degreeGrid = CvSVM::get_default_grid(CvSVM::DEGREE), bool balanced = false)
    //

    //javadoc: CvSVM::train_auto(trainData, responses, varIdx, sampleIdx, params, k_fold, Cgrid, gammaGrid, pGrid, nuGrid, coeffGrid, degreeGrid, balanced)
    public  boolean train_auto(Mat trainData, Mat responses, Mat varIdx, Mat sampleIdx, CvSVMParams params, int k_fold, CvParamGrid Cgrid, CvParamGrid gammaGrid, CvParamGrid pGrid, CvParamGrid nuGrid, CvParamGrid coeffGrid, CvParamGrid degreeGrid, boolean balanced)
    {
        
        boolean retVal = train_auto_0(nativeObj, trainData.nativeObj, responses.nativeObj, varIdx.nativeObj, sampleIdx.nativeObj, params.nativeObj, k_fold, Cgrid.nativeObj, gammaGrid.nativeObj, pGrid.nativeObj, nuGrid.nativeObj, coeffGrid.nativeObj, degreeGrid.nativeObj, balanced);
        
        return retVal;
    }

    //javadoc: CvSVM::train_auto(trainData, responses, varIdx, sampleIdx, params)
    public  boolean train_auto(Mat trainData, Mat responses, Mat varIdx, Mat sampleIdx, CvSVMParams params)
    {
        
        boolean retVal = train_auto_1(nativeObj, trainData.nativeObj, responses.nativeObj, varIdx.nativeObj, sampleIdx.nativeObj, params.nativeObj);
        
        return retVal;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   CvSVM::CvSVM()
    private static native long CvSVM_0();

    // C++:   CvSVM::CvSVM(Mat trainData, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), CvSVMParams params = CvSVMParams())
    private static native long CvSVM_1(long trainData_nativeObj, long responses_nativeObj, long varIdx_nativeObj, long sampleIdx_nativeObj, long params_nativeObj);
    private static native long CvSVM_2(long trainData_nativeObj, long responses_nativeObj);

    // C++:  void CvSVM::clear()
    private static native void clear_0(long nativeObj);

    // C++:  int CvSVM::get_support_vector_count()
    private static native int get_support_vector_count_0(long nativeObj);

    // C++:  int CvSVM::get_var_count()
    private static native int get_var_count_0(long nativeObj);

    // C++:  float CvSVM::predict(Mat sample, bool returnDFVal = false)
    private static native float predict_0(long nativeObj, long sample_nativeObj, boolean returnDFVal);
    private static native float predict_1(long nativeObj, long sample_nativeObj);

    // C++:  void CvSVM::predict(Mat samples, Mat& results)
    private static native void predict_all_0(long nativeObj, long samples_nativeObj, long results_nativeObj);

    // C++:  bool CvSVM::train(Mat trainData, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), CvSVMParams params = CvSVMParams())
    private static native boolean train_0(long nativeObj, long trainData_nativeObj, long responses_nativeObj, long varIdx_nativeObj, long sampleIdx_nativeObj, long params_nativeObj);
    private static native boolean train_1(long nativeObj, long trainData_nativeObj, long responses_nativeObj);

    // C++:  bool CvSVM::train_auto(Mat trainData, Mat responses, Mat varIdx, Mat sampleIdx, CvSVMParams params, int k_fold = 10, CvParamGrid Cgrid = CvSVM::get_default_grid(CvSVM::C), CvParamGrid gammaGrid = CvSVM::get_default_grid(CvSVM::GAMMA), CvParamGrid pGrid = CvSVM::get_default_grid(CvSVM::P), CvParamGrid nuGrid = CvSVM::get_default_grid(CvSVM::NU), CvParamGrid coeffGrid = CvSVM::get_default_grid(CvSVM::COEF), CvParamGrid degreeGrid = CvSVM::get_default_grid(CvSVM::DEGREE), bool balanced = false)
    private static native boolean train_auto_0(long nativeObj, long trainData_nativeObj, long responses_nativeObj, long varIdx_nativeObj, long sampleIdx_nativeObj, long params_nativeObj, int k_fold, long Cgrid_nativeObj, long gammaGrid_nativeObj, long pGrid_nativeObj, long nuGrid_nativeObj, long coeffGrid_nativeObj, long degreeGrid_nativeObj, boolean balanced);
    private static native boolean train_auto_1(long nativeObj, long trainData_nativeObj, long responses_nativeObj, long varIdx_nativeObj, long sampleIdx_nativeObj, long params_nativeObj);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
