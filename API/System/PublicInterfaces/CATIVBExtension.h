#ifndef CATIVBExtension_h
#define CATIVBExtension_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATBaseUnknown.h"
#include "JS0LOGRP.h"
class CATBaseDispatch;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByJS0LOGRP IID IID_CATIVBExtension;
#else // LOCAL_DEFINITION_FOR_IID
extern "C" const IID IID_CATIVBExtension ;
#endif // LOCAL_DEFINITION_FOR_IID

/**
 * Interface to implement in order to extend the V5 Automation object model using the CATIABase::GetItem mechanism.
 * The @href CATIABase#GetItem mechanism offers a generic way to extend the V5
 * Automation object model with custom Automation interfaces. It is the
 * preferred way to achieve such extensions.
 * Script developers use the <tt>GetItem</tt> mechanism in the following
 * manner:
 * <pre>
 * ' VBA sample
 * Dim X As MyAutomationInterface
 * ' Retrieve the extension object associated to Y under the key "MyCATIVBExtensionImpl"
 * Set X = Y.GetItem("MyCATIVBExtensionImpl")
 * </pre>
 * <ul>
 * <li>
 * <tt>Y</tt> is any script object which derives from @href CATIABase
 * or @href CATIACollection. Such objects can be either native V5 Automation objects
 * such as <tt>Viewer</tt> or <tt>Part</tt> or custom objects.
 * </li>
 * <li>
 * <tt>MyCATIVBExtensionImpl</tt> is the name of a V5 implementation object which implements
 * @href CATIVBExtension. <tt>MyCATIVBExtensionImpl</tt> is responsible for instantiating
 * the Automation extension object which will ultimately be returned by @href CATIABase#GetItem method.
 * Note that the <tt>MyCATIVBExtensionImpl</tt> object itself is instantiated using 
 * the @href CATICreateInstance mechanism, so it must also implement the
 * @href CATICreateInstance interface in a code extension.
 * </li>
 * <li>
 * <tt>X</tt> is the Automation extension object, of type <tt>MyAutomationInterface</tt>. It
 * is associated to the <tt>Y</tt> object and is the result of invoking the @href CATIABase#GetItem
 * on <tt>Y</tt> with the <tt>MyCATIVBExtensionImpl</tt> key.
 * </li>
 * </ul>
 * Please note that the @href CATIABase#GetItem mechanism is 
 * implemented by the @href CATBaseObject class (the @href CATIABase interface adaptor) 
 * or @href CATBaseCollection class (the @href CATIACollection interface adaptor), 
 * so make sure your <tt>Y</tt> class derives from either of these adaptors.
 * For implementations which override the @href CATIABase#GetItem method, the
 * overriding implementation must make sure to first invoke the implementation of
 * its superclass. If the implementation of the superclass fails to retrieve
 * the proper Automation extension, then the overriding implementation can use its own
 * algorithm to retrieve it.
 */
class ExportedByJS0LOGRP CATIVBExtension: public CATBaseUnknown {
	CATDeclareInterface;
	
	public:
		
		/**
		 * Returns the extension object associated
		 * to the <tt>iGetItemTarget</tt> Automation object.
		 * @param iGetItemTarget
		 * The Automation object on which <tt>GetItem</tt> is invoked.
		 * @param oGetItemResult
		 * The Automation extension object returned by <tt>GetItem</tt>.
		 * @return
		 * <tt>S_OK</tt> if the object is extension object is successfully instantiated,
		 * <tt>E_FAIL</tt> otherwise
		 */
		virtual HRESULT GetObjects(
			CATBaseUnknown * iGetItemTarget, 
			CATBaseDispatch *& oGetItemResult) const = 0;
};

#endif // CATIVBExtension_h

