
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.ml;

import org.opencv.core.Mat;
import org.opencv.core.Range;

// C++: class CvGBTrees
//javadoc: CvGBTrees
public class CvGBTrees extends CvStatModel {

    protected CvGBTrees(long addr) { super(addr); }


    public static final int
            SQUARED_LOSS = 0,
            ABSOLUTE_LOSS = 0+1,
            HUBER_LOSS = 3,
            DEVIANCE_LOSS = 3+1;


    //
    // C++:   CvGBTrees::CvGBTrees()
    //

    //javadoc: CvGBTrees::CvGBTrees()
    public   CvGBTrees()
    {
        
        super( CvGBTrees_0() );
        
        return;
    }


    //
    // C++:   CvGBTrees::CvGBTrees(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvGBTreesParams params = CvGBTreesParams())
    //

    //javadoc: CvGBTrees::CvGBTrees(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params)
    public   CvGBTrees(Mat trainData, int tflag, Mat responses, Mat varIdx, Mat sampleIdx, Mat varType, Mat missingDataMask, CvGBTreesParams params)
    {
        
        super( CvGBTrees_1(trainData.nativeObj, tflag, responses.nativeObj, varIdx.nativeObj, sampleIdx.nativeObj, varType.nativeObj, missingDataMask.nativeObj, params.nativeObj) );
        
        return;
    }

    //javadoc: CvGBTrees::CvGBTrees(trainData, tflag, responses)
    public   CvGBTrees(Mat trainData, int tflag, Mat responses)
    {
        
        super( CvGBTrees_2(trainData.nativeObj, tflag, responses.nativeObj) );
        
        return;
    }


    //
    // C++:  void CvGBTrees::clear()
    //

    //javadoc: CvGBTrees::clear()
    public  void clear()
    {
        
        clear_0(nativeObj);
        
        return;
    }


    //
    // C++:  float CvGBTrees::predict(Mat sample, Mat missing = cv::Mat(), Range slice = cv::Range::all(), int k = -1)
    //

    //javadoc: CvGBTrees::predict(sample, missing, slice, k)
    public  float predict(Mat sample, Mat missing, Range slice, int k)
    {
        
        float retVal = predict_0(nativeObj, sample.nativeObj, missing.nativeObj, slice.start, slice.end, k);
        
        return retVal;
    }

    //javadoc: CvGBTrees::predict(sample)
    public  float predict(Mat sample)
    {
        
        float retVal = predict_1(nativeObj, sample.nativeObj);
        
        return retVal;
    }


    //
    // C++:  bool CvGBTrees::train(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvGBTreesParams params = CvGBTreesParams(), bool update = false)
    //

    //javadoc: CvGBTrees::train(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params, update)
    public  boolean train(Mat trainData, int tflag, Mat responses, Mat varIdx, Mat sampleIdx, Mat varType, Mat missingDataMask, CvGBTreesParams params, boolean update)
    {
        
        boolean retVal = train_0(nativeObj, trainData.nativeObj, tflag, responses.nativeObj, varIdx.nativeObj, sampleIdx.nativeObj, varType.nativeObj, missingDataMask.nativeObj, params.nativeObj, update);
        
        return retVal;
    }

    //javadoc: CvGBTrees::train(trainData, tflag, responses)
    public  boolean train(Mat trainData, int tflag, Mat responses)
    {
        
        boolean retVal = train_1(nativeObj, trainData.nativeObj, tflag, responses.nativeObj);
        
        return retVal;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   CvGBTrees::CvGBTrees()
    private static native long CvGBTrees_0();

    // C++:   CvGBTrees::CvGBTrees(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvGBTreesParams params = CvGBTreesParams())
    private static native long CvGBTrees_1(long trainData_nativeObj, int tflag, long responses_nativeObj, long varIdx_nativeObj, long sampleIdx_nativeObj, long varType_nativeObj, long missingDataMask_nativeObj, long params_nativeObj);
    private static native long CvGBTrees_2(long trainData_nativeObj, int tflag, long responses_nativeObj);

    // C++:  void CvGBTrees::clear()
    private static native void clear_0(long nativeObj);

    // C++:  float CvGBTrees::predict(Mat sample, Mat missing = cv::Mat(), Range slice = cv::Range::all(), int k = -1)
    private static native float predict_0(long nativeObj, long sample_nativeObj, long missing_nativeObj, int slice_start, int slice_end, int k);
    private static native float predict_1(long nativeObj, long sample_nativeObj);

    // C++:  bool CvGBTrees::train(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvGBTreesParams params = CvGBTreesParams(), bool update = false)
    private static native boolean train_0(long nativeObj, long trainData_nativeObj, int tflag, long responses_nativeObj, long varIdx_nativeObj, long sampleIdx_nativeObj, long varType_nativeObj, long missingDataMask_nativeObj, long params_nativeObj, boolean update);
    private static native boolean train_1(long nativeObj, long trainData_nativeObj, int tflag, long responses_nativeObj);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
