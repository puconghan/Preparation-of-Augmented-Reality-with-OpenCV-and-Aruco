
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.ml;

import org.opencv.core.Mat;
import org.opencv.core.Range;

// C++: class CvBoost
//javadoc: CvBoost
public class CvBoost extends CvStatModel {

    protected CvBoost(long addr) { super(addr); }


    public static final int
            DISCRETE = 0,
            REAL = 1,
            LOGIT = 2,
            GENTLE = 3,
            DEFAULT = 0,
            GINI = 1,
            MISCLASS = 3,
            SQERR = 4;


    //
    // C++:   CvBoost::CvBoost()
    //

    //javadoc: CvBoost::CvBoost()
    public   CvBoost()
    {
        
        super( CvBoost_0() );
        
        return;
    }


    //
    // C++:   CvBoost::CvBoost(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvBoostParams params = CvBoostParams())
    //

    //javadoc: CvBoost::CvBoost(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params)
    public   CvBoost(Mat trainData, int tflag, Mat responses, Mat varIdx, Mat sampleIdx, Mat varType, Mat missingDataMask, CvBoostParams params)
    {
        
        super( CvBoost_1(trainData.nativeObj, tflag, responses.nativeObj, varIdx.nativeObj, sampleIdx.nativeObj, varType.nativeObj, missingDataMask.nativeObj, params.nativeObj) );
        
        return;
    }

    //javadoc: CvBoost::CvBoost(trainData, tflag, responses)
    public   CvBoost(Mat trainData, int tflag, Mat responses)
    {
        
        super( CvBoost_2(trainData.nativeObj, tflag, responses.nativeObj) );
        
        return;
    }


    //
    // C++:  void CvBoost::clear()
    //

    //javadoc: CvBoost::clear()
    public  void clear()
    {
        
        clear_0(nativeObj);
        
        return;
    }


    //
    // C++:  float CvBoost::predict(Mat sample, Mat missing = cv::Mat(), Range slice = cv::Range::all(), bool rawMode = false, bool returnSum = false)
    //

    //javadoc: CvBoost::predict(sample, missing, slice, rawMode, returnSum)
    public  float predict(Mat sample, Mat missing, Range slice, boolean rawMode, boolean returnSum)
    {
        
        float retVal = predict_0(nativeObj, sample.nativeObj, missing.nativeObj, slice.start, slice.end, rawMode, returnSum);
        
        return retVal;
    }

    //javadoc: CvBoost::predict(sample)
    public  float predict(Mat sample)
    {
        
        float retVal = predict_1(nativeObj, sample.nativeObj);
        
        return retVal;
    }


    //
    // C++:  void CvBoost::prune(CvSlice slice)
    //

    //javadoc: CvBoost::prune(slice)
    public  void prune(Range slice)
    {
        
        prune_0(nativeObj, slice.start, slice.end);
        
        return;
    }


    //
    // C++:  bool CvBoost::train(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvBoostParams params = CvBoostParams(), bool update = false)
    //

    //javadoc: CvBoost::train(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params, update)
    public  boolean train(Mat trainData, int tflag, Mat responses, Mat varIdx, Mat sampleIdx, Mat varType, Mat missingDataMask, CvBoostParams params, boolean update)
    {
        
        boolean retVal = train_0(nativeObj, trainData.nativeObj, tflag, responses.nativeObj, varIdx.nativeObj, sampleIdx.nativeObj, varType.nativeObj, missingDataMask.nativeObj, params.nativeObj, update);
        
        return retVal;
    }

    //javadoc: CvBoost::train(trainData, tflag, responses)
    public  boolean train(Mat trainData, int tflag, Mat responses)
    {
        
        boolean retVal = train_1(nativeObj, trainData.nativeObj, tflag, responses.nativeObj);
        
        return retVal;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   CvBoost::CvBoost()
    private static native long CvBoost_0();

    // C++:   CvBoost::CvBoost(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvBoostParams params = CvBoostParams())
    private static native long CvBoost_1(long trainData_nativeObj, int tflag, long responses_nativeObj, long varIdx_nativeObj, long sampleIdx_nativeObj, long varType_nativeObj, long missingDataMask_nativeObj, long params_nativeObj);
    private static native long CvBoost_2(long trainData_nativeObj, int tflag, long responses_nativeObj);

    // C++:  void CvBoost::clear()
    private static native void clear_0(long nativeObj);

    // C++:  float CvBoost::predict(Mat sample, Mat missing = cv::Mat(), Range slice = cv::Range::all(), bool rawMode = false, bool returnSum = false)
    private static native float predict_0(long nativeObj, long sample_nativeObj, long missing_nativeObj, int slice_start, int slice_end, boolean rawMode, boolean returnSum);
    private static native float predict_1(long nativeObj, long sample_nativeObj);

    // C++:  void CvBoost::prune(CvSlice slice)
    private static native void prune_0(long nativeObj, int slice_start, int slice_end);

    // C++:  bool CvBoost::train(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvBoostParams params = CvBoostParams(), bool update = false)
    private static native boolean train_0(long nativeObj, long trainData_nativeObj, int tflag, long responses_nativeObj, long varIdx_nativeObj, long sampleIdx_nativeObj, long varType_nativeObj, long missingDataMask_nativeObj, long params_nativeObj, boolean update);
    private static native boolean train_1(long nativeObj, long trainData_nativeObj, int tflag, long responses_nativeObj);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
