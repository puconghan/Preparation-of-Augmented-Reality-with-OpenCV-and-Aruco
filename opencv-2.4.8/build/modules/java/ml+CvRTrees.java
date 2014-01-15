
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.ml;

import org.opencv.core.Mat;

// C++: class CvRTrees
//javadoc: CvRTrees
public class CvRTrees extends CvStatModel {

    protected CvRTrees(long addr) { super(addr); }


    //
    // C++:   CvRTrees::CvRTrees()
    //

    //javadoc: CvRTrees::CvRTrees()
    public   CvRTrees()
    {
        
        super( CvRTrees_0() );
        
        return;
    }


    //
    // C++:  void CvRTrees::clear()
    //

    //javadoc: CvRTrees::clear()
    public  void clear()
    {
        
        clear_0(nativeObj);
        
        return;
    }


    //
    // C++:  Mat CvRTrees::getVarImportance()
    //

    //javadoc: CvRTrees::getVarImportance()
    public  Mat getVarImportance()
    {
        
        Mat retVal = new Mat(getVarImportance_0(nativeObj));
        
        return retVal;
    }


    //
    // C++:  float CvRTrees::predict(Mat sample, Mat missing = cv::Mat())
    //

    //javadoc: CvRTrees::predict(sample, missing)
    public  float predict(Mat sample, Mat missing)
    {
        
        float retVal = predict_0(nativeObj, sample.nativeObj, missing.nativeObj);
        
        return retVal;
    }

    //javadoc: CvRTrees::predict(sample)
    public  float predict(Mat sample)
    {
        
        float retVal = predict_1(nativeObj, sample.nativeObj);
        
        return retVal;
    }


    //
    // C++:  float CvRTrees::predict_prob(Mat sample, Mat missing = cv::Mat())
    //

    //javadoc: CvRTrees::predict_prob(sample, missing)
    public  float predict_prob(Mat sample, Mat missing)
    {
        
        float retVal = predict_prob_0(nativeObj, sample.nativeObj, missing.nativeObj);
        
        return retVal;
    }

    //javadoc: CvRTrees::predict_prob(sample)
    public  float predict_prob(Mat sample)
    {
        
        float retVal = predict_prob_1(nativeObj, sample.nativeObj);
        
        return retVal;
    }


    //
    // C++:  bool CvRTrees::train(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvRTParams params = CvRTParams())
    //

    //javadoc: CvRTrees::train(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params)
    public  boolean train(Mat trainData, int tflag, Mat responses, Mat varIdx, Mat sampleIdx, Mat varType, Mat missingDataMask, CvRTParams params)
    {
        
        boolean retVal = train_0(nativeObj, trainData.nativeObj, tflag, responses.nativeObj, varIdx.nativeObj, sampleIdx.nativeObj, varType.nativeObj, missingDataMask.nativeObj, params.nativeObj);
        
        return retVal;
    }

    //javadoc: CvRTrees::train(trainData, tflag, responses)
    public  boolean train(Mat trainData, int tflag, Mat responses)
    {
        
        boolean retVal = train_1(nativeObj, trainData.nativeObj, tflag, responses.nativeObj);
        
        return retVal;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   CvRTrees::CvRTrees()
    private static native long CvRTrees_0();

    // C++:  void CvRTrees::clear()
    private static native void clear_0(long nativeObj);

    // C++:  Mat CvRTrees::getVarImportance()
    private static native long getVarImportance_0(long nativeObj);

    // C++:  float CvRTrees::predict(Mat sample, Mat missing = cv::Mat())
    private static native float predict_0(long nativeObj, long sample_nativeObj, long missing_nativeObj);
    private static native float predict_1(long nativeObj, long sample_nativeObj);

    // C++:  float CvRTrees::predict_prob(Mat sample, Mat missing = cv::Mat())
    private static native float predict_prob_0(long nativeObj, long sample_nativeObj, long missing_nativeObj);
    private static native float predict_prob_1(long nativeObj, long sample_nativeObj);

    // C++:  bool CvRTrees::train(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvRTParams params = CvRTParams())
    private static native boolean train_0(long nativeObj, long trainData_nativeObj, int tflag, long responses_nativeObj, long varIdx_nativeObj, long sampleIdx_nativeObj, long varType_nativeObj, long missingDataMask_nativeObj, long params_nativeObj);
    private static native boolean train_1(long nativeObj, long trainData_nativeObj, int tflag, long responses_nativeObj);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
