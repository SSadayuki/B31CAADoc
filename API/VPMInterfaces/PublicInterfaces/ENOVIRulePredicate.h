// COPYRIGHT DASSAULT SYSTEMES 1999
//=============================================================================
//
// VPMSecurity:
//   VPM Security Header for Programmers
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// May 99   Creation                                   J.Poitreau
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
//
#ifndef ENOVIRulePredicate_H_
#define ENOVIRulePredicate_H_

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIRulePredicate ;
#else
extern "C" const IID IID_ENOVIRulePredicate ;
#endif

/**
 * Interface to evaluate a <b>condition</b>.
 * <p>The class implementing this interface should be:
 * <ul>
 *   <li>a DataExtension</li>
 *   <li>extending the type <b>ENOVRulePredImpl_xxx</b>,
 *       where <b>xxx</b> is the user-exit condition referenced in
     *   LCA Security DataGroups.</li>
 * </lu>
 * <p><a name=Example><b>Typical extension sample</b></a>:
 * <table bgcolor=#fefedf><tr><td><pre>
 * class myPredExtension_1 : public CATBaseUnknown
 * {
 *    CATDeclareClass;
 * public:
 *    myPredExtension_1();
 *    ~myPredExtension_1();
 *    HRESULT eval(CATBaseUnknown_var iInstance);
 *    int     setNot()        { _not=1; return _not; }
 *    int     isValid()       { return 1; }
 *    const char * toString() { return "myPred_1"; }
 * private:
 *    int _not;
 * };
 *
 * <font color=red>// this user-condition can be referenced as <b>myCond_1</b> in DataGroups</font>
 *
 * CATImplementClass(myPredExtension_1,
 *                   DataExtension,
 *                   CATBaseUnknown,
 *                   ENOVRulePredImpl_myCond_1);
 *
 * myPredExtension_1::myPredExtension_1() {}
 *
 * myPredExtension_1::~myPredExtension_1() {}
 *
 * HRESULT myPredExtension_1::eval(CATBaseUnknown_var iInstance)
 * {
 *   HRESULT hr = S_OK;
 *   ...
 *   return hr;
 * }</pre></td></tr></table>
 */
class ExportedByGUIDVPMInterfaces ENOVIRulePredicate : public CATBaseUnknown
{
/**
 * @nodoc
 */
    CATDeclareInterface;
public:
/**
 * Evaluate the condition.
 * @param iInstance
 *   the instance to evaluate against the condition represented
 *   by this interface.
 * @return
 *   S_OK    if condition is <b>true</b>
 *   S_FALSE if condition is <b>false</b>
 *   E_FAIL  if condition is invalid, regarding the given instance
 */
    virtual HRESULT      eval(CATBaseUnknown_var iInstance) = 0;
/**
 * Negates the predicate.
 * <br>This method is called at predicate build-time when the NOT
 * operator (!) is used with the condition.
 */
    virtual int          setNot() = 0;
/**
 * Returns the condition validity.
 * @return
 *   0 if the condition is not valid.
 *   1 if the condition is valid.
 *     <br>Note: "user-exit" conditions are always valid.
 */
    virtual int          isValid() = 0;
/**
 * Returns the condition under a string format.
 * @return
 *    the condition name.
 */
    virtual const char * toString() = 0;
};


/** @nodoc */
CATDeclareHandler(ENOVIRulePredicate,CATBaseUnknown);


#endif
