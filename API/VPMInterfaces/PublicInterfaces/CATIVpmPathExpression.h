//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef CATIVpmPathExpression_h_
#define CATIVpmPathExpression_h_

///////////////////////////////////////////////////////////////////////////////
//   PROJECT:...........VPM                                                  //
//   FRAMEWORK:.........                                                     //
//   AUTHOR:............Ivan Sarti (IDC Ltd.)                                //
//   DATE:..............16/06/1997                                           //
//             -----------------------------------------------               //
//   AUTHOR:............                                                     //
//   MODIFICATION:......                                                     //
//   DATE:..............  /  /                                               //
///////////////////////////////////////////////////////////////////////////////


// ========================================================================= //
//   COMMENT                                                                 //
//   =======                                                                 //
// ========================================================================= //

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "GUIDVPMInterfaces.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmPathExpression;
#else
extern "C" const IID IID_CATIVpmPathExpression;
#endif

/**
 *  @CAA2Level L1
 *  @CAA2Usage U3
 */ 

class CATIVpmPathExpression_var;

/**
 * This class supplies methods to manage Path Expressions.
 * <b>role</b>: This class enables to create path expressions.
 * <br>
 * <b>warning</b>: To use this interface, do not consider only the module and framework shown at the bottom of this
 * page. 
 * You must also add the GUIDVPMQueryBuilder module in your Imakefile.mk file, and the framework VPMQueryBuilder in your 
 * framework Identity card.
*/

class ExportedByGUIDVPMInterfaces CATIVpmPathExpression : public CATBaseUnknown
{
    // --> RTTI
	CATDeclareInterface;

  public:
/**
 * @nodoc
 */
    virtual CATUnicodeString   GetEntity() = 0 ;
/**
 * @nodoc
 */
    virtual CATUnicodeString   GetAttribute() = 0 ;
/**
 * @nodoc
 */
    virtual long Join(const CATIVpmPathExpression_var &iJoin) = 0;
};

CATDeclareHandler(CATIVpmPathExpression,CATBaseUnknown);

/**
 * Creates a path expression.
 * @param iEntity : Entity on which the path expression will be created
 * @param iAttr   : Attribute on which the path expression will be created. It must belong to thz
 *                  entity defined as first parameter
 * @return : The created path expression
 */
extern ExportedByGUIDVPMInterfaces
	CATIVpmPathExpression_var CreatePathExpression(const CATUnicodeString &iEntity,
                                                       const CATUnicodeString &iAttr);

#endif // CATIVpmPathExpression_h_



