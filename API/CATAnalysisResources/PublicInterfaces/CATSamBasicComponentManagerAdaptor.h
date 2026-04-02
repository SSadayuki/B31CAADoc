#ifndef CATSamBasicComponentManagerAdaptor_H
#define CATSamBasicComponentManagerAdaptor_H
// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATSamBasicComponentManagerAdaptor.h
// Adaptor for implementations of CATISamBasicComponentManager interface
//
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */
//===================================================================

#include "CATAnalysisResources.h"

#include "CATISamBasicComponentManager.h"

/**
 * Adapter for the implementation of CATISamBasicComponentManager interface.
 * It can be used for AnalysisEntity or AnalysisSet
 * @see CATISamBasicComponentManager
 */

class ExportedByCATAnalysisResources CATSamBasicComponentManagerAdaptor: public CATISamBasicComponentManager
{
	public:

/**
 * Default constructor.
 */
 		CATSamBasicComponentManagerAdaptor();

/**
 * Destructor.
 */
		virtual ~CATSamBasicComponentManagerAdaptor();

/**
 * Returns the number of optional Basic Components.
 * @param NbOptionalBC : the number of optional Basic Components.
 */

		virtual HRESULT GetNbOptionalBC(int & NbOptionalBC);

/**
 * Returns the identifiers of the optional basic components.
 * @param oBCNameList : List of Basic Components name, this is name of instance.
 * @param oBCTypeList : List of Basic Components name, this is name of startup.
 * @param oListOfCATICkeType : Used only in the case of Literal features. CATICkeType of the literal to derive.<br>
 * For Example,  use static CATICkeType_var MyLength = CATIParmDictionary::LengthType to create a length dimension.
 * @see CATIParmDictionary
 */
    virtual HRESULT GetOptionalBCList(CATListValCATUnicodeString & oBCNameList,
                                      CATListValCATUnicodeString & oLiteralNameList,
                                      CATLISTV(CATBaseUnknown_var)& oListOfCATICkeType);

/**
 * Returns if the Basic Component frame is hidden.
 * @param iBasicComponent : the basic component
 * @return SAMHiddenState 
 * @see SAMHiddenState
 */
	virtual SAMHiddenState IsBasicComponentHidden(const CATISamBasicComponent* iBasicComponent);

/**
 * Returns if the Basic Component frame is ReadOnly.
 * @param iBasicComponent : the basic component
 * @return SAMReadOnlyState
 * @see SAMReadOnlyState
 */
	virtual SAMReadOnlyState IsBasicComponentReadOnly(const CATISamBasicComponent* iBasicComponent);

 /**
 * Returns if the Basic Component participates to the Macros recording.
 * The hypothesis is that your entity or set is managed by CATSamCreateEntityCmd.
 * @param iBasicComponent : the basic component
 * @return 
 * <ul> <li> TRUE if the basic component is recorded. <font color="red">This is the default</font>.</li>
 *      <li> FALSE if the basic component is hidden.</li></ul>
 */

		virtual CATBoolean IsBasicComponentRecordable(const CATISamBasicComponent* iBasicCompoment);


	private:
		CATSamBasicComponentManagerAdaptor(const CATSamBasicComponentManagerAdaptor &);
		CATSamBasicComponentManagerAdaptor& operator=(const CATSamBasicComponentManagerAdaptor &);

};

//------------------------------------------------------------------

#endif
