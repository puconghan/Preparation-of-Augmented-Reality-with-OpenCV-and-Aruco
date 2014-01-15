# Install script for directory: /Users/puconghan/Desktop/opencv-2.4.8/data

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/OpenCV/haarcascades" TYPE FILE FILES
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_eye.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_eye_tree_eyeglasses.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_frontalface_alt.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_frontalface_alt2.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_frontalface_alt_tree.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_frontalface_default.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_fullbody.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_lefteye_2splits.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_lowerbody.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_mcs_eyepair_big.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_mcs_eyepair_small.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_mcs_leftear.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_mcs_lefteye.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_mcs_mouth.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_mcs_nose.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_mcs_rightear.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_mcs_righteye.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_mcs_upperbody.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_profileface.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_righteye_2splits.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_smile.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/haarcascades/haarcascade_upperbody.xml"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/OpenCV/lbpcascades" TYPE FILE FILES
    "/Users/puconghan/Desktop/opencv-2.4.8/data/lbpcascades/lbpcascade_frontalface.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/lbpcascades/lbpcascade_profileface.xml"
    "/Users/puconghan/Desktop/opencv-2.4.8/data/lbpcascades/lbpcascade_silverware.xml"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

