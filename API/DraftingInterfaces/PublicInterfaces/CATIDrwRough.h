#ifndef CATIDrwRough_H
#define CATIDrwRough_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATIDrwSimpleText.h"

class CATUnicodeString;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwRough ;
#else
extern "C" const IID IID_CATIDrwRough ;
#endif

/**
* @nodoc
* This interface is now replaced by @href CATIDftRough
* Interface of Roughness symbol objects.
*/
class ExportedByDraftingItfCPP CATIDrwRough : public CATIDrwSimpleText
{
  CATDeclareInterface;
  
public:
  
  /**
  * @nodoc
   * This method is now replaced by @href CATIDftRough#GetTextRange or @href CATIDftTextRange#SetText
  * Set the first (up left) text of the roughness symbol.
  * @param iText
  *   The upper left text.
  */
  virtual void SetText  ( CATUnicodeString &iText) = 0 ;
  
  /**
  * @nodoc
  * This method is now replaced by @href CATIDftRough#SetType
  * Set the type of the roughness symbol.
  * @param iRoughType
  * <pre>
  *             !    1    !    2    !    3    !    4    !
  * RoughType   !         !         !         !         !
  *             ! \    /  ! \----/  ! \    /  ! \----/  !
  *             !  \  /   !  \  /   !  \ O/   !  \ O/   !
  *             !   \/    !   \/    !   \/    !   \/    !
  * <pre>
  */
  virtual void SetRoughType ( int iRoughType ) = 0 ;

  /**
  * @nodoc
  * This method is now replaced by @href CATIDftRough#GetType
  * Returns the type of the roughness symbol.
  * @return
  * <pre>
  *             !    1    !    2    !    3    !    4    !
  * RoughType   !         !         !         !         !
  *             ! \    /  ! \----/  ! \    /  ! \----/  !
  *             !  \  /   !  \  /   !  \ O/   !  \ O/   !
  *             !   \/    !   \/    !   \/    !   \/    !
  * <pre>
  */
  virtual int  GetRoughType ( ) = 0 ;
  
  /**
  * @nodoc
  * This method is now replaced by @href CATIDftRough#SetSpecificationLine or @href CATIDftRough#SetAllAround
  * Set the contact type of the roughness symbol.
  * @param iRoughContact
  * <pre>
  * RoughContact = 1   /------
  *                  \/
  * RoughContact = 2   O-----   
  *                  \/
  * RoughContact = 3   /   
  *                  \/
  * RoughContact = 4   O   
  *                  \/
  * </pre>
  */
  virtual void SetRoughContact ( int  iRoughContact ) = 0 ;

  /**
  * @nodoc
  * This method is now replaced by @href CATIDftRough#GetSpecificationLine or @href CATIDftRough#GetAllAround
  * Returns the contact type of the roughness symbol.
  * @return
  * <pre>
  * RoughContact = 1   /------
  *                  \/
  * RoughContact = 2   O-----   
  *                  \/
  * RoughContact = 3   /   
  *                  \/
  * RoughContact = 4   O   
  *                  \/
  * </pre>
  */
  virtual int  GetRoughContact ( ) = 0 ;
  
  /**
  * @nodoc
  * This method is now replaced by @href CATIDftRough#SetSurfaceLay
  * Set the mode of the roughness symbol.
  * @param iRoughMode
  * <pre>
  * RoughMode ( 1=" ", 2="M", 3="C", 4="R", 
  *             5="P", 6="X", 7="=", 8="OrthoGonal Symbol" )
  * </pre>
  */
  virtual void SetRoughMode ( int  iRoughMode ) = 0 ;

  /**
  * @nodoc
  * This method is now replaced by @href CATIDftRough#GetSurfaceLay
  * Returns the mode of the roughness symbol.
  * @return
  * <pre>
  * RoughMode ( 1=" ", 2="M", 3="C", 4="R", 
  *             5="P", 6="X", 7="=", 8="OrthoGonal Symbol" )
  * </pre>
  */
  virtual int  GetRoughMode ( ) = 0 ;

  /**
  * nodoc
  * Invert the roughness.
  */
  virtual HRESULT SetRoughInvert() = 0 ;
  
  /**
  * nodoc
  * Returns if the roughness is inverted or not.
  * @return
  *   oRoughInvert=1 : roughness rotates 180 degrees
  *   oRoughInvert=0 : no rotation
  */
  virtual HRESULT GetRoughInvert(int *oRoughInvert) = 0 ;
};

CATDeclareHandler ( CATIDrwRough, CATIDrwSimpleText);
#endif
