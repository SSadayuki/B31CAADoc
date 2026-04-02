#ifndef CATITPSRepresentationStrings_H
#define CATITPSRepresentationStrings_H

// COPYRIGHT DASSAULT SYSTEMES 2019

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATTPSItfCPP.h"

class CATListValCATUnicodeString;

extern ExportedByCATTPSItfCPP IID IID_CATITPSRepresentationStrings;

/**
 * Interface dedicated to read content strings of 3D Annotations.
 *<br/><b>Role</b>: Querying this behavior, end user is able to read the unicode strings equivalent
 * representation of annotation. The referred strings are corresponding to 3D annotation content as
 * employed to set up the annotation display.
 *<br /><strong>Precondition</strong>: this interface is supported by 2 distinct set of entities:
 * <ul>
 * <li>3D Tolerancing and Annotation features, exhaustive list is precised here below: </li>
 * <br/>  _ Texts as @href CATITPSText,
 * <br/>  _ Flag Notes as @href CATITPSFlagNote,
 * <br/>  _ Noas as @href CATITPSNoa,
 * <br/>  _ Non semantic Datums as being conjointly @href CATITPSNonSemantic and @href CATITPSDatum,
 * <br/>  _ Non semantic Datum targets (regular and movable) as being conjointly @href CATITPSNonSemantic and @href CATITPSDatumTarget,
 * <br/>  _ Non semantic GDTs as being @href CATITPSNonSemanticGDT,
 * <br/>  _ Non semantic Dimensions as being @href CATITPSNonSemanticDimension,
 * <br/>  _ Coordinate Dimensions as being @href CATIACoordDim,
 * <br/>  _ Datums (semantic) as being @href CATITPSDatumSimple,
 * <br/>  _ Datum Targets (semantic, regular and movable) as being conjointly @href CATITPSDatum (super type) and @href CATITPSDatumTarget,
 * <br/>  _ DRF features (Datum Reference Frame or Datum System with respect to Standard) as being @href CATITPSReferenceFrame,
 * <br/>  _ Geometrical specification features as being either @href CATITPSPosition, or @href CATITPSOrientation, or even @href CATITPSRunOut,
 * <br/>  _ Dimensions (Theoritically Exact TED included) as being @href CATITPSDimension,
 * <br/>  _ Roughness as @href CATITPSRoughness.
 * <br/><b><em>Notice:</em></b> Weld entity along with content of Ligth model are not valid features to query this behavior.
 * <br/>
 * <li>FTA Requirements: as PLM Requirements elements obtained thansk to "Generate Manufacturing Requirement" command.</li>
 * <br/> To retrieve Requirement, it is advised to run a usual PLM Query into the relevant working context looking for
 * FTA Requirement Specification (employ here whatever search criteria to get a non empty answer) and subsequently get all
 * the children. The list of obtained son Requirements, initialy populated by the FTA generation command, are FTA requirements
 * supporting this behavior. Should a requirement being inserted manually, it is not behaving like FTA specific requirements and then
 * QueryInterface call is failing with error E_NOINTERFACE.
 * </ul>
 *<br/>It differs from <em>"CATITPSTextContent"</em> because current interface gives back a list of strings employed
 * to set up the annotation display; contrary to <em>"CATITPSTextContent"</em>, there is no semantic interpretation.
 * Sent back strings are the exact miror of what is figured out in 3D scene or in the associated image for FTA Requirement.
 */
class ExportedByCATTPSItfCPP CATITPSRepresentationStrings : public CATBaseUnknown
{
  public:
    CATDeclareInterface;

    /**
    * Gets a list of Unicode Strings containing from 0 to n strings reflecting the representation
    * of one 3D Tolerancing and Annotation entity (either annotation or requirement).
    *   @param oContentList
    *     Output list of strings; it can be an empty list for ditto NOA, for instance.
    *   @return
    *      S_OK if succeded.
    * <br/>      E_FAIL if strings extraction processing fails.
    */
    virtual HRESULT GetDefinition ( CATListValCATUnicodeString &oContentList ) = 0 ;

} ;

CATDeclareHandler( CATITPSRepresentationStrings, CATBaseUnknown ) ;

#endif
