#ifndef CATIMfgMappingRulesBrowser_H
#define CATIMfgMappingRulesBrowser_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATIMfgMappingRulesBrowser : Browse the mapping rules defined for a design
//                              feature.
//
//=============================================================================
// Dec. 00   Creation                                                C.Petit
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U5
*/
// module
#include "MfgItfEnv.h"

// inheritance
#include "CATBaseUnknown.h"

// System framework
#include "CATString.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMappingRulesBrowser;
#else
extern "C" const IID IID_CATIMfgMappingRulesBrowser;
#endif
/**   
 * Interface dedicated to browse mapping rules defined for a design feature.
 * <b>Role</b>: This interface offers services to browse the mapping rules.
 * Implement it to provide your own mapping rules.<br>
 */
class ExportedByMfgItfEnv CATIMfgMappingRulesBrowser : public CATBaseUnknown
{
CATDeclareInterface;  

public:
/**
 * Get all the mapping rules defined for a given manufacturing activity. 
 * @param iActivity
 *   The type of the manufacturing activity.
 * @param oListMappingRules
 *   The list of mapping rules to fill.
 */
	virtual HRESULT GetMappingRules(const CATUnicodeString&    iActivity,
                                  CATListOfCATUnicodeString& oListMappingRules) = 0;
/**
 * Get the default mapping rule defined for a given manufacturing activity. 
 * @param iActivity
 *   The type of the manufacturing activity
 * @param oDefaultMappingRule
 *   The default mapping rule.
 */
	virtual HRESULT GetDefaultMappingRule(const CATUnicodeString& iActivity,
                                        CATUnicodeString&       oDefaultMappingRule) = 0;
/**
 * Get the icon name associated to a mapping rule. 
 * @param iActivity
 *   The type of the manufacturing activity.
 * @param iMappingRule
 *   The mapping rule title.
 * @param oIconName
 *   The complete path of the icon.
 */
	virtual HRESULT GetIconName(const CATUnicodeString& iActivity,
                              const CATUnicodeString& iMappingRule,
                              CATString&              oIconName) = 0;
/**
 * Get the parameter formula associated to a mapping rule for a given variable.
 * @param iActivity
 *   The type of the manufacturing activity.
 * @param iMappingRule
 *   The mapping rule title.
 * @param iVariable
 *   The variable title.
 * @param oFormula
 *   The parameter formula.
 */
	virtual HRESULT GetUmfFormula(const CATUnicodeString& iActivity,
                                const CATUnicodeString& iMappingRule,
                                const CATUnicodeString& iVariable,
                                CATUnicodeString&       oFormula) = 0;
/**
 * Get some informations about the design feature. 
 * @param oDesignFeatureInfos
 *   The design feature informations to display.
 */
	virtual HRESULT GetDesignFeatureInfos(CATListOfCATUnicodeString& oDesignFeatureInfos) = 0;

/**
 * Get the name of the design feature. 
 * @param oDesignFeatureName
 *   The name of the design feature to display.
 */
	virtual HRESULT GetDesignFeatureName(CATUnicodeString& oDesignFeatureName) = 0;

/**
 * Get the name of the message catalog file to have NLS for mapping rule name.
 * @param oMsgCat
 *   The name of the message catalog file.
 */
	virtual HRESULT GetMessageCatalogFile(CATString& oMsgCat) = 0;
};

CATDeclareHandler(CATIMfgMappingRulesBrowser, CATBaseUnknown);
#endif // CATIMfgMappingRulesBrowser_H
