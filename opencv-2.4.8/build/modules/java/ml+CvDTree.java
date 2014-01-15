
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.ml;

import org.opencv.core.Mat;

// C++: class CvDTree
//javadoc: CvDTree
public class CvDTree extends CvStatModel {

    protected CvDTree(long addr) { super(addr); }


    //
    // C++:   CvDTree::CvDTree()
    //

    //javadoc: CvDTree::CvDTree()
    public   CvDTree()
    {
        
        super( CvDTree_0() );
        
        return;
    }


    //
    // C++:  void CvDTree::clear()
    //

    //javadoc: CvDTree::clear()
    public  void clear()
    {
        
        clear_0(nativeObj);
        
        return;
    }


    //
    // C++:  Mat CvDTree::getVarImportance()
    //

    //javadoc: CvDTree::getVarImportance()
    public  Mat getVarImportance()
    {
        
        Mat retVal = new Mat(getVarImportance_0(nativeObj));
        
        return retVal;
    }


    //
    // C++:  CvDTreeNode* CvDTree::predict(Mat sample, Mat missingDataMask = cv::Mat(), bool preprocessedInput = false)
    //

    // Return type 'CvDTreeNode*' is not supported, skipping the function


    //
    // C++:  bool CvDTree::train(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvDTreeParams params = CvDTreeParams())
    //

    //javadoc: CvDTree::train(trainData, tflag, responses, varIdx, sampleIdx, varType, missingDataMask, params)
    public  boolean train(Mat trainData, int tflag, Mat responses, Mat varIdx, Mat sampleIdx, Mat varType, Mat missingDataMask, CvDTreeParams params)
    {
        
        boolean retVal = train_0(nativeObj, trainData.nativeObj, tflag, responses.nativeObj, varIdx.nativeObj, sampleIdx.nativeObj, varType.nativeObj, missingDataMask.nativeObj, params.nativeObj);
        
        return retVal;
    }

    //javadoc: CvDTree::train(trainData, tflag, responses)
    public  boolean train(Mat trainData, int tflag, Mat responses)
    {
        
        boolean retVal = train_1(nativeObj, trainData.nativeObj, tflag, responses.nativeObj);
        
        return retVal;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   CvDTree::CvDTree()
    private static native long CvDTree_0();

    // C++:  void CvDTree::clear()
    private static native void clear_0(long nativeObj);

    // C++:  Mat CvDTree::getVarImportance()
    private static native long getVarImportance_0(long nativeObj);

    // C++:  bool CvDTree::train(Mat trainData, int tflag, Mat responses, Mat varIdx = cv::Mat(), Mat sampleIdx = cv::Mat(), Mat varType = cv::Mat(), Mat missingDataMask = cv::Mat(), CvDTreeParams params = CvDTreeParams())
    private static native boolean train_0(long nativeObj, long trainData_nativeObj, int tflag, long responses_nativeObj, long varIdx_nativeObj, long sampleIdx_nativeObj, long varType_nativeObj, long missingDataMask_nativeObj, long params_nativeObj);
    private static native boolean train_1(long nativeObj, long trainData_nativeObj, int tflag, long responses_nativeObj);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
