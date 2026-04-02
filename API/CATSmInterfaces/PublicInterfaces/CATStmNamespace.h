#ifndef CATStmNamespace_H
#define	CATStmNamespace_H

// COPYRIGHT DASSAULT SYSTEMES 2005

/**
* @CAA2Level L0
* @CAA2Usage U0
*/


/**
 * Scope level for sheetmetal application.
 * <b>Role</b>: This class is can not be instanciated. It is only used for scope of definitions.
 */
class CATStm {
public:

    /**
     *  Design view type.
     *  @param  Unknown
     *      Unknown view.
     *  @param  Fold
     *      Value associated to the default 3D view (or Fold view).
     *  @param  Unfold
     *      Value associated to the unfold view of the default 3D view.
     */
    enum DesignView {
        Unknown, Fold, Unfold
    };

private:
    
    /** @nodoc */
    CATStm() {};
};

#endif // CATStmNamespace_H
