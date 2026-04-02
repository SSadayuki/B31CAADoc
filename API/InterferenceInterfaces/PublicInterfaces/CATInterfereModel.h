#ifndef CATInterfereModel_H
#define CATInterfereModel_H
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
#include "CATInterfereDefine.h"

#include "IUnknown.h"
#include <stdlib.h>

class CATRepPath;

class CATIntSpecContext;
class CATIntSpecDef;
class CATInterfereResult;



/**
 * Class to create the CAA Interference Model.<br>
 * <b>Role</b>: Class to describe the Interference Model.<br>
 * To compute clash, contact, clearance, minimum distance
 * of a group of objects
 *
 */

class ExportedByCATInterferenceInterfaces CATInterfereModel
{

public:

  //----------------------------------------------------------------------
  /**
    * 
    * <b>Role</b>: Create CATInterfereModel.
    *
    * To construct a Interference Model
    * 
    */
  //----------------------------------------------------------------------

    static CATInterfereModel * Create();


  //----------------------------------------------------------------------
  /**
    * 
    * <b>Role</b>: Addition to the model of a specification of computation.
    * 
    * 
    * @param oIndexSpec
    *        The index of created specification
    *
    * @param iSpecContext
    *        The definition of context (element to set for the computation,
    *                                   see CATIntSpecContext class)
    *
    * @param iSpecDef
    *        The definition of spec (mode, case, ... see CATIntSpecDef class)
    *
    * @return
    *        HRESULT
    * 
    */
  //----------------------------------------------------------------------
    virtual HRESULT AddSpec(int                     * oIndexSpec,
                            const CATIntSpecContext * iSpecContext,
                            const CATIntSpecDef     * iSpecDef) = 0;

  //----------------------------------------------------------------------
  /**
    * 
    * <b>Role</b>: Start the computation on every active Spec.
    * 
    * @return
    *        E_OUTOFMEMORY if memory problem<br>
    *        S_OK          if compute succeed<br>
    * 
    */
  //----------------------------------------------------------------------
    virtual HRESULT Compute() = 0;
  

  //----------------------------------------------------------------------
  /**
    * 
    * <b>Role</b>: Result of the model of a specification of computation.
    * 
    * 
    * @param iIndexSpec
    *        The index of specification for the result
    *
    * @param ioIntResult
    *        The result of the interference (see CATSiInInterfereResult class)<br>
    *        (you have to delete [oIntResult] after get information into.)<br>
    *
    * @return
    *        S_OK          if result succeed
    * 
    */
  //----------------------------------------------------------------------
    virtual HRESULT GetResult(int                   iIndexSpec,
                              CATInterfereResult ** oIntResult) = 0;
  
  
  //----------------------------------------------------------------------
  /** 
    * 
    * Example : 
    * ----------
    *
    *
    *   CATIntSpecContext * pCAAIntSpecContext = CATIntSpecContext::Create();
    *
    *   pCAAIntSpecContext->SetFirstGroup  (..., ...);
    *   pCAAIntSpecContext->SetSecondGroup (..., ...);
    *
    * // Specification Definition
    * CATIntSpecDef * pCAAIntSpecDef = CATIntSpecDef::Create();
    * pCAAIntSpecDef->SetCaseOfCalc(CAT_INTERFERE_CLASH);
    *
    * // Interference Model
    * CATInterfereModel * pInterfereModel = CATInterfereModel::Create();
    * int                    IndexSpec       = 0;
    *
    * // Add Specification Definition (CATIntSpecDef ) and Context (table of CATRepPath) to the model
    * HRESULT HR_addspec = InterfereModel->AddSpec(&IndexSpec, pCAAIntSpecContext, pCAAIntSpecDef);
    * // Compute
    * HRESULT HR_compute = InterfereModel->Compute();
    * 
    * // Analyze Result of interference
    * CATInterfereResult * pInterfereResult = NULL;
    *
    * HRESULT HR_res     = InterfereModel->GetResult(IndexSpec, &pInterfereResult);
    *
    * int NbInterf = pInterfereResult->GetNbInterf();
    *
    * for (i_itf=0; i_itf < NbInterf; i_itf++)
    * {
    *   int TypeRes = CAT_INTERFERE_NONE;
    *   // TypeRes
    *   pInterfereResult->GetTypeRes  (i_itf, TypeRes);
    *
    *   // Other Res ...
    *   pInterfereResult->Get...
    *   
    *   //......
    *   if (TypeRes==CAT_INTERFERE_CLASH)
    *   {
    *       // then clash
    *   }
    *   else if ....
    * }
    * delete pInterfereResult; // all result created in GetResult are destroyed here
    * delete pCAAIntSpecContext;
    * delete pCAAIntSpecDef;
    * delete pInterfereModel;  // Interference Model deleted
    * 
    */
  //----------------------------------------------------------------------

  //----------------------------------------------------------------------
  /**
    * 
    * <b>Role</b>: Destruct CATInterfereModel.
    *
    * To delete a Interference Model
    * 
    */
  //----------------------------------------------------------------------
    virtual ~CATInterfereModel();

};

#endif





