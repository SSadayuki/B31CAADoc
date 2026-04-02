#ifndef CATStmTechnologicalIterator_H
#define CATStmTechnologicalIterator_H

// COPYRIGHT Dassault Systemes 2004

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "ExportedByCATSmInterfaces.h"
#include "CATBaseUnknown.h"

//-----------------------------------------------------------------------

class CATIStmTechnologicalProcess;

/**
 * Iterator class to scan the technological process of a Sheetmetal part.
 * <b>Role</b>:This iterator scans the technological process belonging to
 * a specified MechanicalTool (PartBody/Body).
 * <p>Refer to the @href CATIStmTechnologicalRequest interface to create
 * an instance of this iterator from a given MechanicalTool.</p>
 */
class ExportedByCATSmInterfaces CATStmTechnologicalIterator: public CATBaseUnknown
{
    CATDeclareClass;

public:

    // Standard destructors
    virtual ~CATStmTechnologicalIterator();

    /**
     * Skips to the next technological process.
     * @return An interface pointer to the next technological data, or 
     *      <tt>NULL</tt> if it is over. The returned object life cycle
     *      is monitored by the iterator. So, to use the returned object
     *      longer than the iterator <tt>AddRef</tt> the returned value 
     *      and <tt>Release</tt> when it is not needed any more.
     */
    virtual CATIStmTechnologicalProcess * __stdcall Next() const = 0;

protected:

    // Standard constructors
    CATStmTechnologicalIterator();

private:
  
    // Copy constructor and equal operator
    CATStmTechnologicalIterator( CATStmTechnologicalIterator & );
    CATStmTechnologicalIterator & operator = ( CATStmTechnologicalIterator & );
};

//-----------------------------------------------------------------------

#endif
