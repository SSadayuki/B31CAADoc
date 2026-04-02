// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamSpaceList
//
//=============================================================================
//
// Usage Notes: 
//
//=============================================================================
// Januari 2001   Creation                                                   KD
//=============================================================================
#ifndef CATSamSpaceList_H_
#define CATSamSpaceList_H_

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

#include "CATSamExpression.h"

#include "CATSamISpace.h"
#include "IUnknown.h"

/**
 * List Of Spaces.
 */
class ExportedByCATSamExpression CATSamSpaceList
{
public:

   /**
	* Constructor
	*/
	CATSamSpaceList();

   /**
	* Destructor
	*/
	virtual ~CATSamSpaceList();

   /**
	* @return The Length
	*/
	unsigned int						GetLength() const;

   /**
	* Returns a Space
	* @param iIndex
	* @return A pointer to a CATSamISpace.
  * An AddRef() is done on CATSamISpace before returning the pointer.
	*/
	const CATSamISpace*					operator[]( unsigned int iIndex ) const;

   /**
	* Adds a Space
	* @param iIndex
	* @param iSpace
	* @return S_OK if success, E_FAIL if not (e.g. Reference count > 1).
	*/
	HRESULT								AddSpace( CATSamISpace* iSpace );

   /**
    * Reference counting
	* @return The current amount of references
    */
	int									AddRef() const;

   /**
    * Reference counting
	* @return The current amount of references
    */
	int									Release() const;

protected:

	int						_NumReference;

	unsigned int			_Length;
	CATSamISpace**			_Spaces;
};

#endif
