#ifndef CATInterfereResult_H
#define CATInterfereResult_H
//----------------------------------------------------------------------------
//
// CATIA Version 5 Release R201 Framework CAAInterference
// Copyright Dassault Systemes 2004
//----------------------------------------------------------------------------
//
// Creation: 
// ---------
//           2004 - DBS
//
//----------------------------------------------------------------------------

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

#include "CATInterference.h"
#include <stdlib.h>
#include "IUnknown.h"

class CATRepPath;
class CATInterfereCurve;
class CATInterfereSurface;


/**
 * <b>Role</b>: Class to describe interference result.<br>
 * To use with CATInterfereModel
 *
 */
class ExportedByCATInterferenceInterfaces CATInterfereResult
{
  public:
        
  //------------------------------------------------------------------------------------
  /**
    * 
    * GetNbInterf - Get Number of sub-interference of [CATInInterfereResult].
    *
    * @return 
    *       number of sub-interference
    * 
    */
  //------------------------------------------------------------------------------------
      virtual 
      int     GetNbInterf () const = 0;
      
  //------------------------------------------------------------------------------------
  /**
    * 
    * GetPath - Get Couple Path of the Interference (deleted with ~CATInInterfereResult).
    *
    * @param iNumItf
    *        indice of interference [ 0 <= iNumItf <= GetNbInterf()-1 ]
    * @param opRepPath1
    *        path to the model 1 in interference (DONT DELETE [opRepPath1], deleted when CATInterfereResult is deleted)
    * @param opRepPath2
    *        path to the model 2 in interference (DONT DELETE [opRepPath2], deleted when CATInterfereResult is deleted)
    * @return
    *        HRESULT
    *
    * [*opRepPath1] and [*opRepPath2] allocated in the method
    * 
    */
  //------------------------------------------------------------------------------------
      virtual 
      HRESULT GetPath     (int iNumItf, CATRepPath ** opRepPath1, CATRepPath ** opRepPath2) const = 0;

  //------------------------------------------------------------------------------------
  /**
    * 
    * GetNumPath - Get Couple indice Path of the Interference.
    *
    * @param iNumItf
    *        indice of interference [ 0 <= iNumItf <= GetNbInterf()-1 ]
    * @param oNumPath1
    *        indice path to the model 1 in interference
    * @param oNumPath2
    *        indice path to the model 2 in interference
    * @return
    *        HRESULT
    *
    * (to identify which Path in InterfereModel->AddSpec() are in interference)
    * 
    */
  //------------------------------------------------------------------------------------
      virtual 
      HRESULT GetNumPath  (int iNumItf, int         & oNumPath1,  int         & oNumPath2)  const = 0;
      
  //------------------------------------------------------------------------------------
  /**
    * 
    * GetTypeRes - Get Type of Result of the Interference.
    *
    * @param iNumItf
    *        indice of interference [ 0 <= iNumItf <= GetNbInterf()-1 ]
    * @param opTypeRes
    *        Type of Result of the Interference :<br>
    *        <ul>
    *        <li>CAT_INTERFERE_CLASH
    *        <li>CAT_INTERFERE_CONTACT
    *        <li>...
    *        </ul>
    * @return
    *        HRESULT
    * 
    */
  //------------------------------------------------------------------------------------
      virtual 
      HRESULT GetTypeRes  (int iNumItf, int         & opTypeRes)                            const = 0;

  //------------------------------------------------------------------------------------
  /**
    * 
    * GetNumResult - Get Numeric Result of the Interference.
    *
    * @param iNumItf
    *        indice of interference [ 0 <= iNumItf <= GetNbInterf()-1 ]
    * @param opNumResult
    *        array of numeric result as :<br>
    *         <pre>
    *         ------------------------------------------------------------------------
    *         In Case of CLASH --> (*opNumResult)[0]       = curve length
    *                              (*opNumResult)[1][2][3] = Pt1 of penetration vector
    *                              (*opNumResult)[4][5][6] = Pt2 of penetration vector
    *         ------------------------------------------------------------------------
    *         In Case of CONT  --> (*opNumResult)[0]       = 0
    *         ------------------------------------------------------------------------
    *         In Case of CLEAR --> (*opNumResult)[0]       = distance min
    *         ------------------------------------------------------------------------
    *         In Case of DIST  --> (*opNumResult)[0]       = distance min
    *                              (*opNumResult)[1][2][3] = Pt1 of minimum segment
    *                              (*opNumResult)[4][5][6] = Pt2 of minimum segment
    *         ------------------------------------------------------------------------
    *         </pre>
    * @return
    *        HRESULT
    * 
    */
  //------------------------------------------------------------------------------------
      virtual 
      HRESULT GetNumResult(int iNumItf, const double     ** opNumResult)                    const = 0;
      
      
  //------------------------------------------------------------------------------------
  /**
    * 
    * GetGeoCurve - Get Intersection Curve coordinates of the Interference.
    *
    * @param iNumItf
    *        indice of interference [ 0 <= iNumItf <= GetNbInterf()-1 ]
    * @param opCurve
    *        Intersection curve of the interference in case of CAT_INTERFERE_CLASH<br>
    *        (see CATInterfereCurve for more detail)<br>
    * @return
    *        HRESULT
    * 
    */
  //------------------------------------------------------------------------------------
      virtual 
      HRESULT GetGeoCurve (int                        iNumItf, 
                           const CATInterfereCurve ** opCurve)         = 0;


  //------------------------------------------------------------------------------------
  /**
    * 
    * GetGeoSurface - Get Surface Triangle coordinates of the Interference<br>
    *                 (in case of CAT_INTERFERE_LEVEL_CONT_RESULT_TRI, CAT_INTERFERE_LEVEL_CONT_RESULT_SURF).
    *
    * @param iNumItf
    *        indice of interference [ 0 <= iNumItf <= GetNbInterf()-1 ]
    * @param opSurf
    *        contact or clearance surface of the interference in case of <br>
    *        CAT_INTERFERE_CONT or CAT_INTERFERE_CLEAR<br>
    *
    *        (see CATInterfereSurface for more detail)<br>
    * @return
    *        HRESULT
    * 
    */
  //------------------------------------------------------------------------------------
      virtual 
      HRESULT GetGeoSurface   (int                          iNumItf, 
                               const CATInterfereSurface ** opSurf)         = 0;

  //----------------------------------------------------------------------
  /**
    * 
    * <b>Role</b>: Destruct CATInterfereResult.
    *
    * To delete a Interference Result
    * 
    */
  //----------------------------------------------------------------------
    virtual ~CATInterfereResult();

};

//------------------------------------------------------------------------------------


#endif // CATInterfereResult_H


