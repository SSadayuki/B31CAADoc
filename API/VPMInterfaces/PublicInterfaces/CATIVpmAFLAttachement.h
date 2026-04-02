/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES	2001
//=============================================================================
// June 99      Creation                                            C. Cressend
// November 01  Modification                                            S. Dami
//              Insert CAA2 documentation                                 
//=============================================================================

#ifndef CATIVpmAFLAttachement_H
#define CATIVpmAFLAttachement_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "GUIDVPMInterfaces.h"

#include "CATBaseUnknown.h" 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmAFLAttachement ;
#else
extern "C" const IID IID_CATIVpmAFLAttachement ;
#endif

#include "sequence_octet.h"
#include "CORBAAnyDef.h"

class CATIVpmAFLAction_var;
class CATIVpmAFLAttachement_var;
class CATListValCATIVpmAFLAttachement_var;
class CATIVpmPESomeone_var;
class CATUnicodeString; 
class CATTime;

/**
 * Class to manage the Action Flow Attachment objects.
 * <b>Role</b>: Items that have significance, in the context of an Action, 
 * may be associated to that Action as Attachment objects.
 */
class ExportedByGUIDVPMInterfaces CATIVpmAFLAttachement : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

/**
 * Retrieves the identifier of the Attachment.
 *  @param oId
 *   The Attachment identifier.
 */             
     virtual HRESULT GetId(SEQUENCE(octet)& oId)=0;
     
/**
 * Retrieves the identifier of the Attachment.
 *  @param oId
 *   The Attachment identifier.
 */             
     virtual HRESULT GetId(CORBAAny& oId)=0;

/**
 * Retrieves the name of the Attachment.
 *  @param oName
 *   The Attachment name.
 */             
     virtual HRESULT GetName(CATUnicodeString& oName)=0;

/**
 * Retrieves the type of the Attachment.
 *  @param oType
 *   The Attachment type.
 */             
     virtual HRESULT GetType(CATUnicodeString& oType)=0;

/**
 * Retrieves the description of the Attachment.
 *  @param oObjDesc
 *   The Attachment description.
 */             
     virtual HRESULT GetDesc(CATUnicodeString& oObjDesc)=0;

/**
 * @nodoc
 */
     virtual HRESULT GetCreator(CATIVpmPESomeone_var& oCreator)=0;

/**
 * Adds a pointed Attachment to this Attachment.
 *  @param iAtt
 *   The Attachment to add.
 */             
     virtual HRESULT AddAttachement(CATIVpmAFLAttachement_var& iAtt)=0;

/**
 * Removes a pointed Attachment.
 *  @param iAtt
 *   The Attachment to remove.
 */             
     virtual HRESULT RemoveAttachement(CATIVpmAFLAttachement_var& iAtt)=0;

/**
 * Retrieves a list of pointed Attachments for this Attachment.
 *  @param oListAtts
 *   The Attachment list.
 */             
     virtual HRESULT GetPointedAttachements(CATLISTV(CATIVpmAFLAttachement_var)& oListAtts)=0;

/**
 * Retrieves a list of pointing Attachments for this Attachment.
 *  @param oListAtts
 *   The Attachment list.
 */             
     virtual HRESULT GetPointingAttachements(CATLISTV(CATIVpmAFLAttachement_var)& oListAtts)=0;

/**
 * Retrieves the creation date of this Attachment.
 *  @param oTime
 *   The Attachment creation date.
 */             
     virtual HRESULT GetCreationDate(CATTime& oTime)=0;

/**
 * Retrieves the last modification date of this Attachment.
 *  @param oTime
 *   The Attachment last modification date.
 */             
     virtual HRESULT GetLastModifDate(CATTime& oTime)=0;

/**
 * Retrieves the Action related to this Attachment.
 *  @param oActionRelated
 *   The related Action.
 */
     virtual HRESULT GetActionRelated(CATIVpmAFLAction_var& oActionRelated)=0;
     
/**
 * Dumps the Attachment attributes.
 *  @param iPrefix
 *   The prefix text for each output line.
 */
     virtual HRESULT Dump(char* iPrefix)=0;

};
CATDeclareHandler(CATIVpmAFLAttachement, CATBaseUnknown);
#endif

