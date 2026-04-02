/* -*-c++-*- */
#ifndef CATCatalogDisplayOptions_h
#define CATCatalogDisplayOptions_h
// COPYRIGHT DASSAULT SYSTEMES   2000
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * The Catalog browser display options list.
 * <b>Role:</b>There are the options for the Catalog Browser Dialog box.
 * This object is created by the @href CATICatalogBrowserFactory interface and 
 * handled by the @href CATICatalogBrowser interface.
 * <br>The options are a set of values that you can cumulate using a logical or. To be exact,
 * you can add the first forth options and one of the 
 * last third. If you don't set one of the last third, the <tt>CATCatalogDisplayWithSmallIcon</tt> 
 * is the default value.
 * <pre>
 *  option = CATCatalogDisplayCombo | CATCatalogDisplayWndBtnOKCancel | CATCatalogDisplayWithLargeIcons ;
 *  option = CATCatalogDisplayCombo | CATCatalogDisplayWndModal ;
 * </pre>
 * <br>
 * @param CATCatalogDisplayWndBtnOKCancel
 *  The dialog window is with the OK and the Cancel buttons otherwise only the Close button.
 * @param CATCatalogDisplayWndModal
 *  The dialog window is modal.
 * @param CATCatalogDisplayTree
 *  The dialog window shows the catalog tree structure in addition.
 * @param CATCatalogDisplayCombo
 *  The dialog window shows a combo to select the next three options otherwise there are
 * only the Small and Large icon buttons.
 *  <br> This style is recommended.
 * @param CATCatalogDisplayWithSmallIcon
 *  The dialog window shows the list of elements using small preview icon. 
 * @param CATCatalogDisplayWithLargeIcon
 *  The dialog window shows the list of elements using large preview icon.
 * @param CATCatalogDisplayWithDetail
 *  The dialog window shows the list of elements using the keyword value table.
 * @param CATCatalogDisplayNoDfltCatalog
 *  When the browser is created:<ul>
 *  <li>If you use this option, no default catalog is opened .</li>
 *  <li>If you omit this option, the browser opens a catalog (the last opened one...).</li></ul>
 *  Anyway, calling @href CATICatalogBrowser#SetCurrentCatalogPath opens your catalog.
 *  If you precise this option, only your catalog is opened (performance consideration).
 */
typedef unsigned long CATCciCatalogBrowserDisplayOptions;

/** @nodoc */
typedef unsigned long CATULong;

/** @nodoc */
typedef CATULong CATCciCatalogBrowserDisplayOptions;

/** @nodoc */
#define CATCatalogDisplayWndBtnOKCancel         (1<< 0)
/** @nodoc */
#define CATCatalogDisplayWndBtnOKCancelNotModal (1<< 1) // Reserved for DSA until V5R6 (included)
/** @nodoc */
#define CATCatalogDisplayWndModal               (1<< 2) 
/** @nodoc */
#define CATCatalogDisplayCatalogNameIntoTitle   (1<< 9) // Internal component option - Do not use!
/** @nodoc */
#define CATCatalogDisplayTree                   (1<<10)
/** @nodoc */
#define CATCatalogDisplayWithSmallIcons         (1<<11)
/** @nodoc */
#define CATCatalogDisplayWithLargeIcons         (1<<12)
/** @nodoc */
#define CATCatalogDisplayWithList               (1<<13) // Not used (but reserved)
/** @nodoc */
#define CATCatalogDisplayWithDetails            (1<<14)
/** @nodoc */
#define CATCatalogDisplayCXR6                   (1<<20) // Reserved for DSA until V5R6 (included)
/** @nodoc */
#define CATCatalogDisplayCombo                  (1<<20)
/** @nodoc */
#define CATCatalogDisplayNoDfltCatalog          (1<<21) // = 2097152
/** @nodoc */
#define CATCatalogDisplayResetButton            (1<<29) // Reserved Internal Use
/** @nodoc */
#define CATCatalogDisplayHiddenKeyword          (1<<30) // Reserved Internal Use
/** @nodoc */
#define CATCatalogKeywordRecursiveMode          (1<<31) // Reserved Internal Use

#endif
