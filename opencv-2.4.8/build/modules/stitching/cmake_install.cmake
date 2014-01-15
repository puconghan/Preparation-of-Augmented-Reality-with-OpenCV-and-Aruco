# Install script for directory: /Users/puconghan/Desktop/opencv-2.4.8/modules/stitching

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_stitching.2.4.8.dylib"
    "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_stitching.2.4.dylib"
    "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_stitching.dylib"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_stitching.2.4.8.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_stitching.2.4.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_stitching.dylib"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      EXECUTE_PROCESS(COMMAND "/usr/bin/install_name_tool"
        -id "lib/libopencv_stitching.2.4.dylib"
        -change "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_calib3d.2.4.dylib" "lib/libopencv_calib3d.2.4.dylib"
        -change "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_core.2.4.dylib" "lib/libopencv_core.2.4.dylib"
        -change "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_features2d.2.4.dylib" "lib/libopencv_features2d.2.4.dylib"
        -change "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_flann.2.4.dylib" "lib/libopencv_flann.2.4.dylib"
        -change "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_gpu.2.4.dylib" "lib/libopencv_gpu.2.4.dylib"
        -change "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_highgui.2.4.dylib" "lib/libopencv_highgui.2.4.dylib"
        -change "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_imgproc.2.4.dylib" "lib/libopencv_imgproc.2.4.dylib"
        -change "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_legacy.2.4.dylib" "lib/libopencv_legacy.2.4.dylib"
        -change "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_ml.2.4.dylib" "lib/libopencv_ml.2.4.dylib"
        -change "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_nonfree.2.4.dylib" "lib/libopencv_nonfree.2.4.dylib"
        -change "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_objdetect.2.4.dylib" "lib/libopencv_objdetect.2.4.dylib"
        -change "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_ocl.2.4.dylib" "lib/libopencv_ocl.2.4.dylib"
        -change "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_photo.2.4.dylib" "lib/libopencv_photo.2.4.dylib"
        -change "/Users/puconghan/Desktop/opencv-2.4.8/build/lib/libopencv_video.2.4.dylib" "lib/libopencv_video.2.4.dylib"
        "${file}")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "${file}")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF()
  ENDFOREACH()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/stitching" TYPE FILE FILES "/Users/puconghan/Desktop/opencv-2.4.8/modules/stitching/include/opencv2/stitching/stitcher.hpp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/stitching" TYPE FILE FILES "/Users/puconghan/Desktop/opencv-2.4.8/modules/stitching/include/opencv2/stitching/warpers.hpp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/stitching/detail" TYPE FILE FILES "/Users/puconghan/Desktop/opencv-2.4.8/modules/stitching/include/opencv2/stitching/detail/autocalib.hpp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/stitching/detail" TYPE FILE FILES "/Users/puconghan/Desktop/opencv-2.4.8/modules/stitching/include/opencv2/stitching/detail/blenders.hpp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/stitching/detail" TYPE FILE FILES "/Users/puconghan/Desktop/opencv-2.4.8/modules/stitching/include/opencv2/stitching/detail/camera.hpp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/stitching/detail" TYPE FILE FILES "/Users/puconghan/Desktop/opencv-2.4.8/modules/stitching/include/opencv2/stitching/detail/exposure_compensate.hpp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/stitching/detail" TYPE FILE FILES "/Users/puconghan/Desktop/opencv-2.4.8/modules/stitching/include/opencv2/stitching/detail/matchers.hpp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/stitching/detail" TYPE FILE FILES "/Users/puconghan/Desktop/opencv-2.4.8/modules/stitching/include/opencv2/stitching/detail/motion_estimators.hpp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/stitching/detail" TYPE FILE FILES "/Users/puconghan/Desktop/opencv-2.4.8/modules/stitching/include/opencv2/stitching/detail/seam_finders.hpp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/stitching/detail" TYPE FILE FILES "/Users/puconghan/Desktop/opencv-2.4.8/modules/stitching/include/opencv2/stitching/detail/util.hpp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/stitching/detail" TYPE FILE FILES "/Users/puconghan/Desktop/opencv-2.4.8/modules/stitching/include/opencv2/stitching/detail/util_inl.hpp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/stitching/detail" TYPE FILE FILES "/Users/puconghan/Desktop/opencv-2.4.8/modules/stitching/include/opencv2/stitching/detail/warpers.hpp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/stitching/detail" TYPE FILE FILES "/Users/puconghan/Desktop/opencv-2.4.8/modules/stitching/include/opencv2/stitching/detail/warpers_inl.hpp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

