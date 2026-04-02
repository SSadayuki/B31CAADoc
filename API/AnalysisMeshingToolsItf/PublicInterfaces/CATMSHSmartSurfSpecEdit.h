#ifndef CATMSHSmartSurfSpecEdit_h
#define CATMSHSmartSurfSpecEdit_h
// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U2 
 */
//=============================================================================
//
// CATMSHSmartSurfSpecEdit :
//
// This class manage the mesh interface for the buildmesh method 
//
//=============================================================================
// Decembre  2002   Creation                          Julien Gewinner
//=============================================================================
#include "MSHUITools.h"
#include "CATMSHStudioSpecEdit.h"
#include <stddef.h>

class CATUnicodeString;
class CATDlgFrame;
class CATIMSHStudioSpec;
class CATMSHDlgLength;
class CATMSHCmdMtoSelectDomain;
class CATIMSHStPartition;

/**
 * Object representing a user mesh specification editing in a remesh context.
 * <b>Role</b>: This object provides all necessary informations to 
 * edit a mesh specification in a remesh context.
 * It provides a default Command with a domain selection and a default Frame with a length editor.
 */

class ExportedByMSHUITools CATMSHSmartSurfSpecEdit : public CATMSHStudioSpecEdit
{

public:
/**
 * Specify the mesh specification command. The default command is a domain selection.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The command is valid.
 *   <dt>E_FAIL</dt><dd>The command is invalid.
 *   </dl>
 * @param Command
 *   The command describes the dynamic input parameters of the mesh, <dd>
 *   like a selected domain for example.
 */
  virtual HRESULT GetCommand ( CATStateCommand * & Command );
/**
 * Specify the mesh specification frame. The default frame is a length editor.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The frame is valid.
 *   <dt>E_FAIL</dt><dd>The frame is invalid.
 *   </dl>
 * @param Frame
 *   The frame describes the static input parameters of the mesh,<dd>
 *   like a mesh size for example.
 */
  virtual HRESULT GetFrame ( CATDlgFrame * & Frame );
/**
 * Read the default command selected partition.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The selection is valid.
 *   <dt>E_FAIL</dt><dd>The selection is invalid.
 *   </dl>
 * @param Partition
 *   The partition given by the domain selection.
 */
  virtual HRESULT GetSelectedPartition ( CATIMSHStPartition *& Partition );
/**
 * Read the default frame input length.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The length is valid.
 *   <dt>E_FAIL</dt><dd>The length is invalid.
 *   </dl>
 * @param Size
 *   The size given by the length editor.
 */
  virtual HRESULT GetLocalMeshSize ( double & Size );
/**
 * @nodoc
 */  
  virtual HRESULT WriteSettings ();

protected:
/**
 * @nodoc
 */  
  CATMSHSmartSurfSpecEdit ();
/**
 * @nodoc
 */  
  virtual ~CATMSHSmartSurfSpecEdit ();

private:
/**
 * Constructeur recopie
 */
  CATMSHSmartSurfSpecEdit(const CATMSHSmartSurfSpecEdit & Source );
/**
 * Operateur d'affectation
 */
  CATMSHSmartSurfSpecEdit& operator=(const CATMSHSmartSurfSpecEdit & Source );

  // Données membres

  CATDlgFrame     *           _Frame;
  CATMSHCmdMtoSelectDomain *  _Command;
  CATMSHDlgLength *           _LocalSizeEditor;
};

#endif
