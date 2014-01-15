
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.ml;

import org.opencv.core.Mat;

// C++: class CvKNearest
//javadoc: CvKNearest
public class CvKNearest extends CvStatModel {

    protected CvKNearest(long addr) { super(addr); }


    //
    // C++:   CvKNearest::CvKNearest()
    //

    //javadoc: CvKNearest::CvKNearest()
    public   CvKNearest()
    {
        
        super( CvKNearest_0() );
        
        return;
    }


    //
    // C++:   CvKNearest::CvKNearest(Mat trainData, Mat responses, Mat sampleIdx = cv::Mat(), bool isRegression = false, int max_k = 32)
    //

    //javadoc: CvKNearest::CvKNearest(trainData, responses, sampleIdx, isRegression, max_k)
    public   CvKNearest(Mat trainData, Mat responses, Mat sampleIdx, boolean isRegression, int max_k)
    {
        
        super( CvKNearest_1(trainData.nativeObj, responses.nativeObj, sampleIdx.nativeObj, isRegression, max_k) );
        
        return;
    }

    //javadoc: CvKNearest::CvKNearest(trainData, responses)
    public   CvKNearest(Mat trainData, Mat responses)
    {
        
        super( CvKNearest_2(trainData.nativeObj, responses.nativeObj) );
        
        return;
    }


    //
    // C++:  float CvKNearest::find_nearest(Mat samples, int k, Mat& results, Mat& neighborResponses, Mat& dists)
    //

    //javadoc: CvKNearest::find_nearest(samples, k, results, neighborResponses, dists)
    public  float find_nearest(Mat samples, int k, Mat results, Mat neighborResponses, Mat dists)
    {
        
        float retVal = find_nearest_0(nativeObj, samples.nativeObj, k, results.nativeObj, neighborResponses.nativeObj, dists.nativeObj);
        
        return retVal;
    }


    //
    // C++:  bool CvKNearest::train(Mat trainData, Mat responses, Mat sampleIdx = cv::Mat(), bool isRegression = false, int maxK = 32, bool updateBase = false)
    //

    //javadoc: CvKNearest::train(trainData, responses, sampleIdx, isRegression, maxK, updateBase)
    public  boolean train(Mat trainData, Mat responses, Mat sampleIdx, boolean isRegression, int maxK, boolean updateBase)
    {
        
        boolean retVal = train_0(nativeObj, trainData.nativeObj, responses.nativeObj, sampleIdx.nativeObj, isRegression, maxK, updateBase);
        
        return retVal;
    }

    //javadoc: CvKNearest::train(trainData, responses)
    public  boolean train(Mat trainData, Mat responses)
    {
        
        boolean retVal = train_1(nativeObj, trainData.nativeObj, responses.nativeObj);
        
        return retVal;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   CvKNearest::CvKNearest()
    private static native long CvKNearest_0();

    // C++:   CvKNearest::CvKNearest(Mat trainData, Mat responses, Mat sampleIdx = cv::Mat(), bool isRegression = false, int max_k = 32)
    private static native long CvKNearest_1(long trainData_nativeObj, long responses_nativeObj, long sampleIdx_nativeObj, boolean isRegression, int max_k);
    private static native long CvKNearest_2(long trainData_nativeObj, long responses_nativeObj);

    // C++:  float CvKNearest::find_nearest(Mat samples, int k, Mat& results, Mat& neighborResponses, Mat& dists)
    private static native float find_nearest_0(long nativeObj, long samples_nativeObj, int k, long results_nativeObj, long neighborResponses_nativeObj, long dists_nativeObj);

    // C++:  bool CvKNearest::train(Mat trainData, Mat responses, Mat sampleIdx = cv::Mat(), bool isRegression = false, int maxK = 32, bool updateBase = false)
    private static native boolean train_0(long nativeObj, long trainData_nativeObj, long responses_nativeObj, long sampleIdx_nativeObj, boolean isRegression, int maxK, boolean updateBase);
    private static native boolean train_1(long nativeObj, long trainData_nativeObj, long responses_nativeObj);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
