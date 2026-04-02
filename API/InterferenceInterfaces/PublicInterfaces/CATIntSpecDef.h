#ifndef CATIntSpecDef_H
#define CATIntSpecDef_H

//----------------------------------------------------------------------------
//
// CATIA Version 5 Release R201 Framework InterferenceInterfaces
// Copyright Dassault Systemes 2005
//----------------------------------------------------------------------------
//
// Creation: 
// ---------
//           2005 - DBS
//
//----------------------------------------------------------------------------

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

#include "CATInterference.h"

#include "CATInterfereDefine.h"

#include "IUnknown.h"


/**
  * <b>Role</b>: Class to describe interference specification definition.<br>
  * To use with CATInterfereModel
  *
  */
class ExportedByCATInterferenceInterfaces CATIntSpecDef
{
  public:
  
  //---------------------------------------------------------------------------
  /**
    * Create CATIntSpecDef.
    *
    * To construct an interference specification definition
    * 
    */
  //---------------------------------------------------------------------------

    static CATIntSpecDef * Create();


  //---------------------------------------------------------------------------
  //------------------------SET------------------------------------------------
  //---------------------------------------------------------------------------

  //---------------------------------------------------------------------------
  /**
    * SetModeOfCalc - set Mode of computation.
    *
    * @param iModeOfCalc
    *        <ul>
    *        <li>mode of computation : <br>
    *        <li>CAT_INTERFERE_MODELOW <br>
    *        <li>CAT_INTERFERE_MODEHIGH <br>
    *        <li>...
    *        </ul>
    *        ( see CATInterfereDefine for more detail )
    */
  //---------------------------------------------------------------------------
      virtual
      void SetModeOfCalc                      (int    iModeOfCalc) = 0;

  //---------------------------------------------------------------------------
  /**
    * SetCaseOfCalc - set Case of computation.
    *
    * @param iCaseOfCalc :
    *        <ul>
    *        <li>CAT_INTERFERE_CLASH  -> to verify a simple clash (possible contact) 
    *        <li>CAT_INTERFERE_CONT   -> to verify clash and contact 
    *        <li>CAT_INTERFERE_CLEAR  -> to verify clash and contact and clearance 
    *        <li>CAT_INTERFERE_DIST   -> to compute the minimum distance 
    *        <li>...
    *        </ul>
    *        ( see CATInterfereDefine for more detail ) 
    */
  //---------------------------------------------------------------------------
      virtual
      void SetCaseOfCalc                      (int    iCaseOfCalc) = 0;

  //---------------------------------------------------------------------------
  /**
    * SetValueOfClearance - set Value Of Clearance.
    *
    * @param iValueOfClearance :
    *   <ul>
    *   <li>0. by default -> In Case of CAT_INTERFERE_CLEARANCE --> Value Of Clearance 
    *   <li>              -> In Case of CAT_INTERFERE_BAND      --> Value Of Clearance Max 
    *   </ul>
    *        ( see CATInterfereDefine for more detail )
    */
  //---------------------------------------------------------------------------
      virtual
      void SetValueOfClearance                (double iValueOfClearance) = 0;

  //---------------------------------------------------------------------------
  /** @nodoc
    * SetValueOfClearanceMin - set Value Of Clearance Min.
    *
    * @param iValueOfClearanceMin : (0. by default)
    *
    */
  //---------------------------------------------------------------------------
      virtual
      void SetValueOfClearanceMin             (double iValueOfClearanceMin) = 0;

  //---------------------------------------------------------------------------
  /** @nodoc
    * SetDistDiscretizationMin - set Min Distance of mesh discretization.
    *
    * @param iDistDiscretizationMin : (5mm by default)
    * 
    */
  //---------------------------------------------------------------------------
      virtual
      void SetDistDiscretizationMin           (double iDistDiscretizationMin) = 0;

  //---------------------------------------------------------------------------
  /**
    * SetModeOfPenetration - set Mode of Penetration.
    *
    * @param iModeOfPenetration :
    *        <ul>
    *        <li>CAT_INTERFERE_LEVEL_PENETR_NO 
    *        <li>CAT_INTERFERE_LEVEL_PENETR_ELEMENT 
    *        <li>CAT_INTERFERE_LEVEL_PENETR_MODEL (by default) 
    *        </ul>
    *        ( see CATInterfereDefine for more detail )
    */
  //---------------------------------------------------------------------------
      virtual
      void SetModeOfPenetration               (int    iModeOfPenetration) = 0;

  //---------------------------------------------------------------------------
  /**
    * SetModeOfDist - set Mode of Distance.
    *
    *   (in case of CAT_INTERFERE_CLEAR --> compute or not the minimal distance)
    *
    * @param iModeOfDist :
    *        <ul>
    *        <li>CAT_INTERFERE_LEVEL_DIST_NO 
    *        <li>CAT_INTERFERE_LEVEL_DIST_MODEL (by default) 
    *        </ul>
    *        ( see CATInterfereDefine for more detail )
    */
  //---------------------------------------------------------------------------
      virtual
      void SetModeOfDist                      (int    iModeOfDist) = 0;

  //---------------------------------------------------------------------------
  /**
    * SetLevelOfDetail - set Level Of Detailled computation.
    *
    * @param iLevelOfDetail :
    *        <ul>
    *        <li>CAT_INTERFERE_LEVEL_DETAIL_ELEMENT (by default) 
    *        <li>CAT_INTERFERE_LEVEL_DETAIL_MODEL 
    *        </ul>
    *        ( see CATInterfereDefine for more detail )
    */
  //---------------------------------------------------------------------------
      virtual
      void SetLevelOfDetail                   (int    iLevelOfDetail) = 0;

  //---------------------------------------------------------------------------
  /**
    * SetLevelOfClashResult - set Level Of Result for clash.
    *
    * @param iLevelOfClashResult :
    *        <ul>
    *        <li>CAT_INTERFERE_LEVEL_CLASH_RESULT_NO    (by default)
    *        <li>CAT_INTERFERE_LEVEL_CLASH_RESULT_CURVE  
    *        </ul>
    *        ( see CATInterfereDefine for more detail )
    */
  //---------------------------------------------------------------------------
      virtual
      void SetLevelOfClashResult              (int    iLevelOfClashResult) = 0;

  //---------------------------------------------------------------------------
  /**
    * SetLevelOfContResult - set Level Of Result for contact or clearance.
    *
    * @param iLevelOfClashResult :
    *        <ul>
    *        <li>CAT_INTERFERE_LEVELCONT_RESULT_NO      (by default) 
    *        <li>CAT_INTERFERE_LEVEL_CONT_RESULT_TRI 
    *        </ul>
    *        ( see CATInterfereDefine for more detail )
    */
  //---------------------------------------------------------------------------
      virtual
      void SetLevelOfContResult               (int    iLevelOfContResult) = 0;
      
  //---------------------------------------------------------------------------
  /**
    * SetLevelOfGeometry - set Level Of Geometry for type of component to computing.
    *
    * @param iLevelOfGeometry :
    *        <ul>
    *        <li>CAT_INTERFERE_LEVEL_GEO_CURVE      
    *        <li>CAT_INTERFERE_LEVEL_GEO_SURFACE 
    *        <li>CAT_INTERFERE_LEVEL_GEO_VOLUME 
    *        <li> default = (CAT_INTERFERE_LEVEL_GEO_SURFACE | CAT_INTERFERE_LEVEL_GEO_VOLUME)
    *        </ul>
    *        ( see CATInterfereDefine for more detail )
    */
  //---------------------------------------------------------------------------
      virtual
      void SetLevelOfGeometry                 (int    iLevelOfGeometry) = 0;



  //---------------------------------------------------------------------------
  /**
    * SetPathResult - set if we want a path result.
    *
    * @param iPathResult :
    *      <ul>
    *      <li>0 --> no Path in the result 
    *      <li>1 --> to have Path of each sub interference result (default) 
    *      </ul>
    */
  //---------------------------------------------------------------------------
      virtual
      void SetPathResult                      (int    iPathResult) = 0;

  //---------------------------------------------------------------------------
  /** @nodoc
    * SetSortIntCurve - To sort the result of intersection curve with.
    *                   simple segment, polyline ...
    *
    * @param iSortIntCurve :
    *      <ul>
    *      <li>0 --> NO SORT ("n" segment created : p11-p21,..., p1i-p2i, ... p1n-p2n) (default)  
    *      <li>1 --> SORT with "n" CONNEX POLYLINE with each "ni" points  (p11-p21-p31, p1i-p2i-p3i-p4i,..,p1n-p2n,p3n)  
    *      <li>2 --> (same that 1 but with the granularity of canonic element in each polyline)  
    *      <li>3 --> (same that 2 but with NO duplicated point,segment,... in polyline)  
    *      </ul>
    */
  //---------------------------------------------------------------------------
      virtual
      void SetSortIntCurve                    (int    iSortIntCurve) = 0;

  //---------------------------------------------------------------------------
  //------------------------GET------------------------------------------------
  //---------------------------------------------------------------------------

  /**
    * GetModeOfCalc - Get Mode of computation.
    */
      virtual
      int     GetModeOfCalc                   () const = 0;

  /**
    * GetCaseOfCalc - Get Case of computation.
    */
      virtual
      int     GetCaseOfCalc                   () const = 0;

  /**
    * GetValueOfClearance - Get Value Of Clearance.
    */
      virtual
      double  GetValueOfClearance             () const = 0;

  /** @nodoc
    * GetValueOfClearanceMin - .
    */
      virtual
      double  GetValueOfClearanceMin          () const = 0;

  /** @nodoc
    * GetDistDiscretizationMin - .
    */
      virtual
      double  GetDistDiscretizationMin        () const = 0;

  /**
    * GetModeOfPenetration - .
    */
      virtual
      int     GetModeOfPenetration            () const = 0;

  /**
    * GetModeOfDist - .
    */
      virtual
      int     GetModeOfDist                   () const = 0;

  /**
    * GetLevelOfDetail - .
    */
      virtual
      int     GetLevelOfDetail                () const = 0;

  /**
    * GetLevelOfClashResult - .
    */
      virtual
      int     GetLevelOfClashResult           () const = 0;

  /**
    * GetLevelOfContResult - .
    */
      virtual
      int     GetLevelOfContResult            () const = 0;

  /**
    * GetLevelOfGeometry - .
    */
      virtual
      int     GetLevelOfGeometry              () const = 0;

  /**
    * GetPathResult - .
    */
      virtual
      int     GetPathResult                   () const = 0;


  /** @nodoc
    * GetSortIntCurve - .
    */
      virtual
      int     GetSortIntCurve                 () const = 0;


  //---------------------------------------------------------------------------
  /**
    * Destruct CATIntSpecDef.
    *
    * To delete an interference specification definition
    * 
    */
    virtual ~CATIntSpecDef();
  //---------------------------------------------------------------------------
};  



#endif // CATIntSpecDef_H


