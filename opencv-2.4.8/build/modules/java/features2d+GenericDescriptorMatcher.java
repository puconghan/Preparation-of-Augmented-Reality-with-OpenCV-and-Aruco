
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.features2d;

import java.lang.String;
import java.util.ArrayList;
import java.util.List;
import org.opencv.core.Mat;
import org.opencv.core.MatOfDMatch;
import org.opencv.core.MatOfKeyPoint;
import org.opencv.utils.Converters;

// C++: class javaGenericDescriptorMatcher
//javadoc: javaGenericDescriptorMatcher
public class GenericDescriptorMatcher {

    protected final long nativeObj;
    protected GenericDescriptorMatcher(long addr) { nativeObj = addr; }


    public static final int
            ONEWAY = 1,
            FERN = 2;


    //
    // C++:  void javaGenericDescriptorMatcher::add(vector_Mat images, vector_vector_KeyPoint keypoints)
    //

    //javadoc: javaGenericDescriptorMatcher::add(images, keypoints)
    public  void add(List<Mat> images, List<MatOfKeyPoint> keypoints)
    {
        Mat images_mat = Converters.vector_Mat_to_Mat(images);
        List<Mat> keypoints_tmplm = new ArrayList<Mat>((keypoints != null) ? keypoints.size() : 0);
        Mat keypoints_mat = Converters.vector_vector_KeyPoint_to_Mat(keypoints, keypoints_tmplm);
        add_0(nativeObj, images_mat.nativeObj, keypoints_mat.nativeObj);
        
        return;
    }


    //
    // C++:  void javaGenericDescriptorMatcher::classify(Mat queryImage, vector_KeyPoint& queryKeypoints, Mat trainImage, vector_KeyPoint trainKeypoints)
    //

    //javadoc: javaGenericDescriptorMatcher::classify(queryImage, queryKeypoints, trainImage, trainKeypoints)
    public  void classify(Mat queryImage, MatOfKeyPoint queryKeypoints, Mat trainImage, MatOfKeyPoint trainKeypoints)
    {
        Mat queryKeypoints_mat = queryKeypoints;
        Mat trainKeypoints_mat = trainKeypoints;
        classify_0(nativeObj, queryImage.nativeObj, queryKeypoints_mat.nativeObj, trainImage.nativeObj, trainKeypoints_mat.nativeObj);
        
        return;
    }


    //
    // C++:  void javaGenericDescriptorMatcher::classify(Mat queryImage, vector_KeyPoint& queryKeypoints)
    //

    //javadoc: javaGenericDescriptorMatcher::classify(queryImage, queryKeypoints)
    public  void classify(Mat queryImage, MatOfKeyPoint queryKeypoints)
    {
        Mat queryKeypoints_mat = queryKeypoints;
        classify_1(nativeObj, queryImage.nativeObj, queryKeypoints_mat.nativeObj);
        
        return;
    }


    //
    // C++:  void javaGenericDescriptorMatcher::clear()
    //

    //javadoc: javaGenericDescriptorMatcher::clear()
    public  void clear()
    {
        
        clear_0(nativeObj);
        
        return;
    }


    //
    // C++:  javaGenericDescriptorMatcher* javaGenericDescriptorMatcher::jclone(bool emptyTrainData = false)
    //

    //javadoc: javaGenericDescriptorMatcher::jclone(emptyTrainData)
    public  GenericDescriptorMatcher clone(boolean emptyTrainData)
    {
        
        GenericDescriptorMatcher retVal = new GenericDescriptorMatcher(clone_0(nativeObj, emptyTrainData));
        
        return retVal;
    }

    //javadoc: javaGenericDescriptorMatcher::jclone()
    public  GenericDescriptorMatcher clone()
    {
        
        GenericDescriptorMatcher retVal = new GenericDescriptorMatcher(clone_1(nativeObj));
        
        return retVal;
    }


    //
    // C++: static javaGenericDescriptorMatcher* javaGenericDescriptorMatcher::create(int matcherType)
    //

    //javadoc: javaGenericDescriptorMatcher::create(matcherType)
    public static GenericDescriptorMatcher create(int matcherType)
    {
        
        GenericDescriptorMatcher retVal = new GenericDescriptorMatcher(create_0(matcherType));
        
        return retVal;
    }


    //
    // C++:  bool javaGenericDescriptorMatcher::empty()
    //

    //javadoc: javaGenericDescriptorMatcher::empty()
    public  boolean empty()
    {
        
        boolean retVal = empty_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  vector_Mat javaGenericDescriptorMatcher::getTrainImages()
    //

    //javadoc: javaGenericDescriptorMatcher::getTrainImages()
    public  List<Mat> getTrainImages()
    {
        List<Mat> retVal = new ArrayList<Mat>();
        Mat retValMat = new Mat(getTrainImages_0(nativeObj));
        Converters.Mat_to_vector_Mat(retValMat, retVal);
        return retVal;
    }


    //
    // C++:  vector_vector_KeyPoint javaGenericDescriptorMatcher::getTrainKeypoints()
    //

    //javadoc: javaGenericDescriptorMatcher::getTrainKeypoints()
    public  List<MatOfKeyPoint> getTrainKeypoints()
    {
        List<MatOfKeyPoint> retVal = new ArrayList<MatOfKeyPoint>();
        Mat retValMat = new Mat(getTrainKeypoints_0(nativeObj));
        Converters.Mat_to_vector_vector_KeyPoint(retValMat, retVal);
        return retVal;
    }


    //
    // C++:  bool javaGenericDescriptorMatcher::isMaskSupported()
    //

    //javadoc: javaGenericDescriptorMatcher::isMaskSupported()
    public  boolean isMaskSupported()
    {
        
        boolean retVal = isMaskSupported_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  void javaGenericDescriptorMatcher::knnMatch(Mat queryImage, vector_KeyPoint queryKeypoints, Mat trainImage, vector_KeyPoint trainKeypoints, vector_vector_DMatch& matches, int k, Mat mask = Mat(), bool compactResult = false)
    //

    //javadoc: javaGenericDescriptorMatcher::knnMatch(queryImage, queryKeypoints, trainImage, trainKeypoints, matches, k, mask, compactResult)
    public  void knnMatch(Mat queryImage, MatOfKeyPoint queryKeypoints, Mat trainImage, MatOfKeyPoint trainKeypoints, List<MatOfDMatch> matches, int k, Mat mask, boolean compactResult)
    {
        Mat queryKeypoints_mat = queryKeypoints;
        Mat trainKeypoints_mat = trainKeypoints;
        Mat matches_mat = new Mat();
        knnMatch_0(nativeObj, queryImage.nativeObj, queryKeypoints_mat.nativeObj, trainImage.nativeObj, trainKeypoints_mat.nativeObj, matches_mat.nativeObj, k, mask.nativeObj, compactResult);
        Converters.Mat_to_vector_vector_DMatch(matches_mat, matches);
        return;
    }

    //javadoc: javaGenericDescriptorMatcher::knnMatch(queryImage, queryKeypoints, trainImage, trainKeypoints, matches, k)
    public  void knnMatch(Mat queryImage, MatOfKeyPoint queryKeypoints, Mat trainImage, MatOfKeyPoint trainKeypoints, List<MatOfDMatch> matches, int k)
    {
        Mat queryKeypoints_mat = queryKeypoints;
        Mat trainKeypoints_mat = trainKeypoints;
        Mat matches_mat = new Mat();
        knnMatch_1(nativeObj, queryImage.nativeObj, queryKeypoints_mat.nativeObj, trainImage.nativeObj, trainKeypoints_mat.nativeObj, matches_mat.nativeObj, k);
        Converters.Mat_to_vector_vector_DMatch(matches_mat, matches);
        return;
    }


    //
    // C++:  void javaGenericDescriptorMatcher::knnMatch(Mat queryImage, vector_KeyPoint queryKeypoints, vector_vector_DMatch& matches, int k, vector_Mat masks = vector<Mat>(), bool compactResult = false)
    //

    //javadoc: javaGenericDescriptorMatcher::knnMatch(queryImage, queryKeypoints, matches, k, masks, compactResult)
    public  void knnMatch(Mat queryImage, MatOfKeyPoint queryKeypoints, List<MatOfDMatch> matches, int k, List<Mat> masks, boolean compactResult)
    {
        Mat queryKeypoints_mat = queryKeypoints;
        Mat matches_mat = new Mat();
        Mat masks_mat = Converters.vector_Mat_to_Mat(masks);
        knnMatch_2(nativeObj, queryImage.nativeObj, queryKeypoints_mat.nativeObj, matches_mat.nativeObj, k, masks_mat.nativeObj, compactResult);
        Converters.Mat_to_vector_vector_DMatch(matches_mat, matches);
        return;
    }

    //javadoc: javaGenericDescriptorMatcher::knnMatch(queryImage, queryKeypoints, matches, k)
    public  void knnMatch(Mat queryImage, MatOfKeyPoint queryKeypoints, List<MatOfDMatch> matches, int k)
    {
        Mat queryKeypoints_mat = queryKeypoints;
        Mat matches_mat = new Mat();
        knnMatch_3(nativeObj, queryImage.nativeObj, queryKeypoints_mat.nativeObj, matches_mat.nativeObj, k);
        Converters.Mat_to_vector_vector_DMatch(matches_mat, matches);
        return;
    }


    //
    // C++:  void javaGenericDescriptorMatcher::match(Mat queryImage, vector_KeyPoint queryKeypoints, Mat trainImage, vector_KeyPoint trainKeypoints, vector_DMatch& matches, Mat mask = Mat())
    //

    //javadoc: javaGenericDescriptorMatcher::match(queryImage, queryKeypoints, trainImage, trainKeypoints, matches, mask)
    public  void match(Mat queryImage, MatOfKeyPoint queryKeypoints, Mat trainImage, MatOfKeyPoint trainKeypoints, MatOfDMatch matches, Mat mask)
    {
        Mat queryKeypoints_mat = queryKeypoints;
        Mat trainKeypoints_mat = trainKeypoints;
        Mat matches_mat = matches;
        match_0(nativeObj, queryImage.nativeObj, queryKeypoints_mat.nativeObj, trainImage.nativeObj, trainKeypoints_mat.nativeObj, matches_mat.nativeObj, mask.nativeObj);
        
        return;
    }

    //javadoc: javaGenericDescriptorMatcher::match(queryImage, queryKeypoints, trainImage, trainKeypoints, matches)
    public  void match(Mat queryImage, MatOfKeyPoint queryKeypoints, Mat trainImage, MatOfKeyPoint trainKeypoints, MatOfDMatch matches)
    {
        Mat queryKeypoints_mat = queryKeypoints;
        Mat trainKeypoints_mat = trainKeypoints;
        Mat matches_mat = matches;
        match_1(nativeObj, queryImage.nativeObj, queryKeypoints_mat.nativeObj, trainImage.nativeObj, trainKeypoints_mat.nativeObj, matches_mat.nativeObj);
        
        return;
    }


    //
    // C++:  void javaGenericDescriptorMatcher::match(Mat queryImage, vector_KeyPoint queryKeypoints, vector_DMatch& matches, vector_Mat masks = vector<Mat>())
    //

    //javadoc: javaGenericDescriptorMatcher::match(queryImage, queryKeypoints, matches, masks)
    public  void match(Mat queryImage, MatOfKeyPoint queryKeypoints, MatOfDMatch matches, List<Mat> masks)
    {
        Mat queryKeypoints_mat = queryKeypoints;
        Mat matches_mat = matches;
        Mat masks_mat = Converters.vector_Mat_to_Mat(masks);
        match_2(nativeObj, queryImage.nativeObj, queryKeypoints_mat.nativeObj, matches_mat.nativeObj, masks_mat.nativeObj);
        
        return;
    }

    //javadoc: javaGenericDescriptorMatcher::match(queryImage, queryKeypoints, matches)
    public  void match(Mat queryImage, MatOfKeyPoint queryKeypoints, MatOfDMatch matches)
    {
        Mat queryKeypoints_mat = queryKeypoints;
        Mat matches_mat = matches;
        match_3(nativeObj, queryImage.nativeObj, queryKeypoints_mat.nativeObj, matches_mat.nativeObj);
        
        return;
    }


    //
    // C++:  void javaGenericDescriptorMatcher::radiusMatch(Mat queryImage, vector_KeyPoint queryKeypoints, Mat trainImage, vector_KeyPoint trainKeypoints, vector_vector_DMatch& matches, float maxDistance, Mat mask = Mat(), bool compactResult = false)
    //

    //javadoc: javaGenericDescriptorMatcher::radiusMatch(queryImage, queryKeypoints, trainImage, trainKeypoints, matches, maxDistance, mask, compactResult)
    public  void radiusMatch(Mat queryImage, MatOfKeyPoint queryKeypoints, Mat trainImage, MatOfKeyPoint trainKeypoints, List<MatOfDMatch> matches, float maxDistance, Mat mask, boolean compactResult)
    {
        Mat queryKeypoints_mat = queryKeypoints;
        Mat trainKeypoints_mat = trainKeypoints;
        Mat matches_mat = new Mat();
        radiusMatch_0(nativeObj, queryImage.nativeObj, queryKeypoints_mat.nativeObj, trainImage.nativeObj, trainKeypoints_mat.nativeObj, matches_mat.nativeObj, maxDistance, mask.nativeObj, compactResult);
        Converters.Mat_to_vector_vector_DMatch(matches_mat, matches);
        return;
    }

    //javadoc: javaGenericDescriptorMatcher::radiusMatch(queryImage, queryKeypoints, trainImage, trainKeypoints, matches, maxDistance)
    public  void radiusMatch(Mat queryImage, MatOfKeyPoint queryKeypoints, Mat trainImage, MatOfKeyPoint trainKeypoints, List<MatOfDMatch> matches, float maxDistance)
    {
        Mat queryKeypoints_mat = queryKeypoints;
        Mat trainKeypoints_mat = trainKeypoints;
        Mat matches_mat = new Mat();
        radiusMatch_1(nativeObj, queryImage.nativeObj, queryKeypoints_mat.nativeObj, trainImage.nativeObj, trainKeypoints_mat.nativeObj, matches_mat.nativeObj, maxDistance);
        Converters.Mat_to_vector_vector_DMatch(matches_mat, matches);
        return;
    }


    //
    // C++:  void javaGenericDescriptorMatcher::radiusMatch(Mat queryImage, vector_KeyPoint queryKeypoints, vector_vector_DMatch& matches, float maxDistance, vector_Mat masks = vector<Mat>(), bool compactResult = false)
    //

    //javadoc: javaGenericDescriptorMatcher::radiusMatch(queryImage, queryKeypoints, matches, maxDistance, masks, compactResult)
    public  void radiusMatch(Mat queryImage, MatOfKeyPoint queryKeypoints, List<MatOfDMatch> matches, float maxDistance, List<Mat> masks, boolean compactResult)
    {
        Mat queryKeypoints_mat = queryKeypoints;
        Mat matches_mat = new Mat();
        Mat masks_mat = Converters.vector_Mat_to_Mat(masks);
        radiusMatch_2(nativeObj, queryImage.nativeObj, queryKeypoints_mat.nativeObj, matches_mat.nativeObj, maxDistance, masks_mat.nativeObj, compactResult);
        Converters.Mat_to_vector_vector_DMatch(matches_mat, matches);
        return;
    }

    //javadoc: javaGenericDescriptorMatcher::radiusMatch(queryImage, queryKeypoints, matches, maxDistance)
    public  void radiusMatch(Mat queryImage, MatOfKeyPoint queryKeypoints, List<MatOfDMatch> matches, float maxDistance)
    {
        Mat queryKeypoints_mat = queryKeypoints;
        Mat matches_mat = new Mat();
        radiusMatch_3(nativeObj, queryImage.nativeObj, queryKeypoints_mat.nativeObj, matches_mat.nativeObj, maxDistance);
        Converters.Mat_to_vector_vector_DMatch(matches_mat, matches);
        return;
    }


    //
    // C++:  void javaGenericDescriptorMatcher::read(string fileName)
    //

    //javadoc: javaGenericDescriptorMatcher::read(fileName)
    public  void read(String fileName)
    {
        
        read_0(nativeObj, fileName);
        
        return;
    }


    //
    // C++:  void javaGenericDescriptorMatcher::train()
    //

    //javadoc: javaGenericDescriptorMatcher::train()
    public  void train()
    {
        
        train_0(nativeObj);
        
        return;
    }


    //
    // C++:  void javaGenericDescriptorMatcher::write(string fileName)
    //

    //javadoc: javaGenericDescriptorMatcher::write(fileName)
    public  void write(String fileName)
    {
        
        write_0(nativeObj, fileName);
        
        return;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:  void javaGenericDescriptorMatcher::add(vector_Mat images, vector_vector_KeyPoint keypoints)
    private static native void add_0(long nativeObj, long images_mat_nativeObj, long keypoints_mat_nativeObj);

    // C++:  void javaGenericDescriptorMatcher::classify(Mat queryImage, vector_KeyPoint& queryKeypoints, Mat trainImage, vector_KeyPoint trainKeypoints)
    private static native void classify_0(long nativeObj, long queryImage_nativeObj, long queryKeypoints_mat_nativeObj, long trainImage_nativeObj, long trainKeypoints_mat_nativeObj);

    // C++:  void javaGenericDescriptorMatcher::classify(Mat queryImage, vector_KeyPoint& queryKeypoints)
    private static native void classify_1(long nativeObj, long queryImage_nativeObj, long queryKeypoints_mat_nativeObj);

    // C++:  void javaGenericDescriptorMatcher::clear()
    private static native void clear_0(long nativeObj);

    // C++:  javaGenericDescriptorMatcher* javaGenericDescriptorMatcher::jclone(bool emptyTrainData = false)
    private static native long clone_0(long nativeObj, boolean emptyTrainData);
    private static native long clone_1(long nativeObj);

    // C++: static javaGenericDescriptorMatcher* javaGenericDescriptorMatcher::create(int matcherType)
    private static native long create_0(int matcherType);

    // C++:  bool javaGenericDescriptorMatcher::empty()
    private static native boolean empty_0(long nativeObj);

    // C++:  vector_Mat javaGenericDescriptorMatcher::getTrainImages()
    private static native long getTrainImages_0(long nativeObj);

    // C++:  vector_vector_KeyPoint javaGenericDescriptorMatcher::getTrainKeypoints()
    private static native long getTrainKeypoints_0(long nativeObj);

    // C++:  bool javaGenericDescriptorMatcher::isMaskSupported()
    private static native boolean isMaskSupported_0(long nativeObj);

    // C++:  void javaGenericDescriptorMatcher::knnMatch(Mat queryImage, vector_KeyPoint queryKeypoints, Mat trainImage, vector_KeyPoint trainKeypoints, vector_vector_DMatch& matches, int k, Mat mask = Mat(), bool compactResult = false)
    private static native void knnMatch_0(long nativeObj, long queryImage_nativeObj, long queryKeypoints_mat_nativeObj, long trainImage_nativeObj, long trainKeypoints_mat_nativeObj, long matches_mat_nativeObj, int k, long mask_nativeObj, boolean compactResult);
    private static native void knnMatch_1(long nativeObj, long queryImage_nativeObj, long queryKeypoints_mat_nativeObj, long trainImage_nativeObj, long trainKeypoints_mat_nativeObj, long matches_mat_nativeObj, int k);

    // C++:  void javaGenericDescriptorMatcher::knnMatch(Mat queryImage, vector_KeyPoint queryKeypoints, vector_vector_DMatch& matches, int k, vector_Mat masks = vector<Mat>(), bool compactResult = false)
    private static native void knnMatch_2(long nativeObj, long queryImage_nativeObj, long queryKeypoints_mat_nativeObj, long matches_mat_nativeObj, int k, long masks_mat_nativeObj, boolean compactResult);
    private static native void knnMatch_3(long nativeObj, long queryImage_nativeObj, long queryKeypoints_mat_nativeObj, long matches_mat_nativeObj, int k);

    // C++:  void javaGenericDescriptorMatcher::match(Mat queryImage, vector_KeyPoint queryKeypoints, Mat trainImage, vector_KeyPoint trainKeypoints, vector_DMatch& matches, Mat mask = Mat())
    private static native void match_0(long nativeObj, long queryImage_nativeObj, long queryKeypoints_mat_nativeObj, long trainImage_nativeObj, long trainKeypoints_mat_nativeObj, long matches_mat_nativeObj, long mask_nativeObj);
    private static native void match_1(long nativeObj, long queryImage_nativeObj, long queryKeypoints_mat_nativeObj, long trainImage_nativeObj, long trainKeypoints_mat_nativeObj, long matches_mat_nativeObj);

    // C++:  void javaGenericDescriptorMatcher::match(Mat queryImage, vector_KeyPoint queryKeypoints, vector_DMatch& matches, vector_Mat masks = vector<Mat>())
    private static native void match_2(long nativeObj, long queryImage_nativeObj, long queryKeypoints_mat_nativeObj, long matches_mat_nativeObj, long masks_mat_nativeObj);
    private static native void match_3(long nativeObj, long queryImage_nativeObj, long queryKeypoints_mat_nativeObj, long matches_mat_nativeObj);

    // C++:  void javaGenericDescriptorMatcher::radiusMatch(Mat queryImage, vector_KeyPoint queryKeypoints, Mat trainImage, vector_KeyPoint trainKeypoints, vector_vector_DMatch& matches, float maxDistance, Mat mask = Mat(), bool compactResult = false)
    private static native void radiusMatch_0(long nativeObj, long queryImage_nativeObj, long queryKeypoints_mat_nativeObj, long trainImage_nativeObj, long trainKeypoints_mat_nativeObj, long matches_mat_nativeObj, float maxDistance, long mask_nativeObj, boolean compactResult);
    private static native void radiusMatch_1(long nativeObj, long queryImage_nativeObj, long queryKeypoints_mat_nativeObj, long trainImage_nativeObj, long trainKeypoints_mat_nativeObj, long matches_mat_nativeObj, float maxDistance);

    // C++:  void javaGenericDescriptorMatcher::radiusMatch(Mat queryImage, vector_KeyPoint queryKeypoints, vector_vector_DMatch& matches, float maxDistance, vector_Mat masks = vector<Mat>(), bool compactResult = false)
    private static native void radiusMatch_2(long nativeObj, long queryImage_nativeObj, long queryKeypoints_mat_nativeObj, long matches_mat_nativeObj, float maxDistance, long masks_mat_nativeObj, boolean compactResult);
    private static native void radiusMatch_3(long nativeObj, long queryImage_nativeObj, long queryKeypoints_mat_nativeObj, long matches_mat_nativeObj, float maxDistance);

    // C++:  void javaGenericDescriptorMatcher::read(string fileName)
    private static native void read_0(long nativeObj, String fileName);

    // C++:  void javaGenericDescriptorMatcher::train()
    private static native void train_0(long nativeObj);

    // C++:  void javaGenericDescriptorMatcher::write(string fileName)
    private static native void write_0(long nativeObj, String fileName);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
