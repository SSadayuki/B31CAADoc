#ifndef CATInterfereBE_H
#define CATInterfereBE_H
//----------------------------------------------------------------------------
//
// CATIA Version 5 Release R201 Framework CAAInterference
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
#include <stdlib.h>
#include "IUnknown.h"

#include "CATUnicodeString.h"

class CATRepPath;


/**
 * <b>Role</b>: Class to describe interference bounding element.<br>
 * This interference bounding element can be defined as Voxel, 
 * element as sphere, ... To use with CATIntSpecContext
 *
 */
class ExportedByCATInterferenceInterfaces CATInterfereBE
{
  public:
        
  //------------------------------------------------------------------------------------
  /**
    * 
    * Create - create interference bounding element.
    *
    * @return 
    *       pointer of [CATInterfereBE *]
    */
  //------------------------------------------------------------------------------------
       
      static CATInterfereBE * Create(); 

  //------------------------------------------------------------------------------------
  /**
    * 
    * SetPathDirectory - set path directory of interference bounding element.
    *
    * @param iPathDirectory
    *        path directory of interference bounding element
    * @return 
    *       HRESULT
    */
  //------------------------------------------------------------------------------------
      virtual 
      HRESULT SetPathDirectory  (CATUnicodeString & iPathDirectory)  = 0;

  //------------------------------------------------------------------------------------
  /**
    * 
    * SetRepresentation - Set Representation of interference bounding element.
    *
    * @param iRepPath
    *        CATRepPath of interference bounding element
    * @return 
    *       HRESULT
    */
  //------------------------------------------------------------------------------------
      virtual 
      HRESULT SetRepresentation (CATRepPath * iRepPath)              = 0;

  //------------------------------------------------------------------------------------
  /**
    * 
    * SetSize - Set Discretized Size of interference bounding element.
    *
    * @param iSize
    *        Set Discretized Size (example for voxel) of interference bounding element<br>
    *        (by default Size=10mm)
    * @return 
    *       HRESULT
    */
  //------------------------------------------------------------------------------------
      virtual 
      HRESULT SetSize           (double iSize)                       = 0;

  //------------------------------------------------------------------------------------
  /**
    * 
    * SetSave - Set save or not of interference bounding element.
    *
    * @param iIfSave
    *        <ul>
    *        <li> 0 -- not saving
    *        <li> 1 -- saving interference bounding element in [iPathDirectory] -- default
    *        </ul>
    * @return 
    *       HRESULT
    */
  //------------------------------------------------------------------------------------
      virtual 
      HRESULT SetSave           (int iIfSave)                        = 0;

  //------------------------------------------------------------------------------------
  /**
    * 
    * SetGeneration - Set force or not generation of interference bounding element.
    *
    * @param iGeneration
    *        <ul>
    *        <li> 0 -- not force generation (read bounding element in [iPathDirectory] if exists) 
    *        <li> 1 -- force generation and replace bounding element in [iPathDirectory] -- default
    *        <li> 2 -- not force generation (read bounding element in [iPathDirectory] if exists even if size or accuracy are changed)
    *        </ul>
    * @return 
    *       HRESULT
    */
  //------------------------------------------------------------------------------------
      virtual 
      HRESULT SetGeneration     (int iGeneration)                    = 0;

  //------------------------------------------------------------------------------------
  /**
    * 
    * SetAccuracy - Set Accuracy of interference bounding element.
    *
    * @param iAccuracy
    *        <ul>
    *        <li> 1 -- simple accuracy with discretized Bounding element (voxel for example) 
    *        <li> 2 -- triangle accuracy -- default
    *        </ul>
    * @return 
    *       HRESULT
    */
  //------------------------------------------------------------------------------------
      virtual 
      HRESULT SetAccuracy       (int iAccuracy)                      = 0;

  //------------------------------------------------------------------------------------
  /**
    * 
    * SetFormat - Set Format of interference bounding element.
    *
    * @param iFormat
    *        <ul>
    *        <li> 0 -- default format (current) -- default
    *        <li> 1 -- next format ... (not implemented for the moment)
    *        </ul>
    * @return 
    *       HRESULT
    */
  //------------------------------------------------------------------------------------
      virtual 
      HRESULT SetFormat         (int iFormat)                        = 0;

  //------------------------------------------------------------------------------------
  /**
    * 
    * Generate - Generate interference bounding element.
    *
    * @return 
    *       HRESULT
    */
  //------------------------------------------------------------------------------------
      virtual
      HRESULT Generate() = 0;


  //------------------------------------------------------------------------------------
  /**
    * 
    * GetPathDirectory - Get Path Directory of interference bounding element.
    *
    * @param oPathDirectory
    *        path directory of interference bounding element
    * @return 
    *       HRESULT
    * 
    */
  //------------------------------------------------------------------------------------
      virtual 
      HRESULT GetPathDirectory (CATUnicodeString & oPathDirectory) const = 0;
      

  //------------------------------------------------------------------------------------

      virtual ~CATInterfereBE();

};

//------------------------------------------------------------------------------------


#endif // CATInterfereBE_H


