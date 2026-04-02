#ifndef CATMSHStudioSpecEdit_h
#define CATMSHStudioSpecEdit_h
// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U2 
 */
//=============================================================================
//
// CATMSHStudioSpecEdit :
//
// This class manage the mesh interface for the buildmesh method 
//
//=============================================================================
// Decembre  2002   Creation                          Julien Gewinner
//=============================================================================
#include "MSHStudio.h"
#include "CATIMSHStudioSpecEdit.h"
#include <stddef.h>

class CATUnicodeString;
class CATDlgDialog;
class CATIMSHStudioSpec;

/**
 * Object representing a user mesh specification editing.
 * <b>Role</b>: This object provides all necessary informations to 
 * edit a mesh specification.
 */

class ExportedByMSHStudio CATMSHStudioSpecEdit : public CATIMSHStudioSpecEdit
{

public:

/**
 * @nodoc
 */  
  virtual HRESULT SetWindow ( CATDlgDialog * Window );
/**
 * @nodoc
 */  
  virtual HRESULT GetWindow ( CATDlgDialog *& Window );


protected:
/**
 * @nodoc
 */  
  CATMSHStudioSpecEdit ();
/**
 * @nodoc
 */  
  virtual ~CATMSHStudioSpecEdit ();


private:

/**
 * Constructeur recopie
 */
  CATMSHStudioSpecEdit(const CATMSHStudioSpecEdit & Source );
/**
 * Operateur d'affectation
 */
  CATMSHStudioSpecEdit& operator=(const CATMSHStudioSpecEdit & Source );

  // Données membres

  CATDlgDialog *  _Window;
};

#endif
