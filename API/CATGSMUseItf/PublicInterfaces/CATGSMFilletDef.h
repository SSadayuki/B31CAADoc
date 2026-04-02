/* -*-c++-*- */

#ifndef CATGSMFilletDef_H_ 
#define CATGSMFilletDef_H_ 

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for fillet support.
 * @param CATGSMNoTrim
 *  no trim of fillet supports
 * @param CATGSMTrim
 *  trim of fillet supports
 * @param CATGSMTrimSupport1
 *  trim of fillet support 1
 * @param CATGSMTrimSupport2
 *  trim of fillet support 2
 * 
 * @see CATIGSMFilletBiTangent, CATIGSMFactory
 */ 

enum CATGSMFilletSupportsTrimMode {  CATGSMNoTrim = 0 ,
                                     CATGSMTrim   = 1 ,
                                     CATGSMTrimSupport1 = 2,
                                     CATGSMTrimSupport2 = 3};

/**
 * Types for fillet extremities.
 * @param CATGSMSmooth
 *          smooth 
 * @param CATGSMStraight
 *          straight
 * @param CATGSMMaximum
 *          maximum
 * @param CATGSMMinimum
 *          minimum
 * 
 * @see CATIGSMFilletBiTangent, CATIGSMFactory
 */ 
enum CATGSMFilletExtremitiesMode { CATGSMSmooth=0, 
                                   CATGSMStraight=1, 
                                   CATGSMMaximum=2, 
                                   CATGSMMinimum=3 };

/**
 * Types for fillet cross section shape
 * @param CATGSMCircularSection
 *			Fillet cross sections are circle arcs
 * @param CATGSMConicalSection
 *			Fillet cross sections are conic arcs
 *
 * @see CATIGSMFilletBiTangent, CATIGSMFactory
 */ 
enum CATGSMFilletSectionType {CATGSMCircularSection = 0,
							  CATGSMConicalSection = 1};

/**
 * Types for fillet radius parameter.
 * @param CATGSMRadiusDefaultMode
 *          radius mode 
 * @param CATGSMRadiusChordLengthMode
 *          chordal mode
 * 
 * @see CATIGSMFilletBiTangent, CATIGSMFactory
 */ 
enum CATGSMFilletRadiusType {CATGSMRadiusDefault = 0,
							 CATGSMRadiusChordLength = 1};


#endif
