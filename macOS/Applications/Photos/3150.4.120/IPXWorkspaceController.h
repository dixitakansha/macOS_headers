//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXSourceController.h>

#import "IPXEditorDelegate-Protocol.h"
#import "IPXWorkspaceDelegate-Protocol.h"
#import "PFResourceAccessClient-Protocol.h"
#import "SBLSharedServicesManagerReceiver-Protocol.h"

@class IPXCreateMenuController, IPXKeywordsManagerController, IPXLibrarySearchViewController, IPXSelectedVersionsMetadataController, IPXSelectionMonitor, IPXSharePopoverController, IPXSharedPhotostreamProgressController, IPXSidebarModelController, IPXSlideshowAdHocController, IPXViewController, IPXWorkspaceModel, NSAppearance, NSMutableDictionary, NSString, NSUndoManager, UXBarButtonItem;

@interface IPXWorkspaceController : UXSourceController <IPXEditorDelegate, IPXWorkspaceDelegate, PFResourceAccessClient, SBLSharedServicesManagerReceiver>
{
    struct PFDirectMessagingMulticaster *_notificationsMulticaster;
    IPXSharePopoverController *_sharePopoverController;
    IPXKeywordsManagerController *_keywordsManagerController;
    IPXSelectedVersionsMetadataController *_metadataController;
    IPXSidebarModelController *_sidebarModelController;
    IPXSharedPhotostreamProgressController *_sharedPhotostreamProgressController;
    BOOL _viewWillAppearForFirstTimeCalled;
    BOOL _databaseIsRegisteredWithBackgroundServices;
    BOOL _showInspectorIfSupportedByViewController;
    BOOL _importing;
    BOOL _photosHasContentToDisplay;
    BOOL _hasSharedStreams;
    id _systemLibraryChangeObserver;
    BOOL _isTouchBarActive;
    BOOL _isFacesConfirmationInProgress;
    BOOL _toolbarHiddenInFullScreen;
    BOOL _didInitializeRootViewControllers;
    IPXWorkspaceModel *_workspace;
    NSUndoManager *_undoManager;
    IPXSelectionMonitor *_selectionMonitor;
    UXBarButtonItem *_librarySearchItem;
    IPXSlideshowAdHocController *_slideshowAdHocController;
    NSAppearance *_appearance;
    NSMutableDictionary *_browserControllers;
    IPXCreateMenuController *_createMenuController;
    IPXLibrarySearchViewController *_librarySearchViewController;
}

+ (void)addEditorActionToNavigationDestination:(id)arg1 withSelectedVersion:(id)arg2 editMode:(BOOL)arg3;
+ (void)initialize;
@property BOOL didInitializeRootViewControllers; // @synthesize didInitializeRootViewControllers=_didInitializeRootViewControllers;
@property(retain, nonatomic) IPXLibrarySearchViewController *librarySearchViewController; // @synthesize librarySearchViewController=_librarySearchViewController;
@property(readonly) IPXCreateMenuController *createMenuController; // @synthesize createMenuController=_createMenuController;
@property(readonly) NSMutableDictionary *browserControllers; // @synthesize browserControllers=_browserControllers;
@property(readonly, nonatomic) BOOL isTouchBarActive; // @synthesize isTouchBarActive=_isTouchBarActive;
@property(nonatomic) BOOL toolbarHiddenInFullScreen; // @synthesize toolbarHiddenInFullScreen=_toolbarHiddenInFullScreen;
@property(readonly, nonatomic) BOOL isFacesConfirmationInProgress; // @synthesize isFacesConfirmationInProgress=_isFacesConfirmationInProgress;
@property(retain, nonatomic) NSAppearance *appearance; // @synthesize appearance=_appearance;
@property(retain, nonatomic) IPXSlideshowAdHocController *slideshowAdHocController; // @synthesize slideshowAdHocController=_slideshowAdHocController;
@property(retain, nonatomic) IPXKeywordsManagerController *keywordsManagerController; // @synthesize keywordsManagerController=_keywordsManagerController;
@property(retain, nonatomic) IPXSelectedVersionsMetadataController *metadataController; // @synthesize metadataController=_metadataController;
@property(readonly) UXBarButtonItem *librarySearchItem; // @synthesize librarySearchItem=_librarySearchItem;
@property(readonly, nonatomic) IPXSelectionMonitor *selectionMonitor; // @synthesize selectionMonitor=_selectionMonitor;
@property(readonly, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(nonatomic) __weak IPXWorkspaceModel *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)resourceWillShutdown:(struct NSObject *)arg1;
- (void)_createSmartAlbum;
- (void)_createPrintsOrderWithSelection:(id)arg1;
- (void)_createAlbumWithParentFolder:(id)arg1 empty:(BOOL)arg2 selection:(id)arg3;
- (void)_createPrintProjectWithType:(long long)arg1 selection:(id)arg2;
- (id)_requestViewControllerForPrintProductWithType:(long long)arg1 selection:(id)arg2;
- (void)_createSlideshowWithSelection:(id)arg1;
- (void)_createMenuItemSelected:(long long)arg1 selection:(id)arg2;
- (void)updateTouchBar;
- (id)makeTouchBar;
- (void)editor:(id)arg1 didChangeSelection:(id)arg2;
- (void)editor:(id)arg1 didChangeEditMode:(BOOL)arg2;
- (void)workspaceWillSave:(id)arg1;
- (void)showTrashBrowserForWorkspace:(id)arg1;
- (BOOL)workspacePhotosHasContent:(id)arg1;
- (void)workspace:(id)arg1 willRemoveBrowserAtIndex:(unsigned long long)arg2;
- (void)workspace:(id)arg1 didSelectBrowserAtIndex:(unsigned long long)arg2;
- (void)workspace:(id)arg1 didAddBrowserAtIndex:(unsigned long long)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)importStarted:(id)arg1;
- (void)emptyLibraryHadContentAdded:(id)arg1;
@property(readonly, nonatomic, getter=isSidebarVisible) BOOL sidebarVisible;
@property(readonly, nonatomic, getter=isSidebarEnabled) BOOL sidebarEnabled;
- (BOOL)_sidebarDisplayAllowed;
- (BOOL)_sidebarDisplayPreferred;
- (void)navigateToDestination:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)willSelectAlreadySelectedViewController:(id)arg1;
- (unsigned long long)_tabIdentifierForTopViewController:(id)arg1;
- (void)willSelectViewController:(id)arg1;
- (void)didChangeTopViewControllerForNavigationController:(id)arg1;
- (void)didChangeSelectedViewController;
- (void)_configureManagedNavigationController:(id)arg1;
- (BOOL)_reduceMotionEnabled;
- (void)installSidebarIfNecessary;
- (BOOL)topViewControllerAllowsInteraction;
- (BOOL)topViewControllerIsEditing;
@property(readonly, nonatomic) BOOL topViewControllerIsAlbums;
@property(readonly, nonatomic) BOOL topViewControllerIsPlugin;
@property(readonly, nonatomic) BOOL topViewControllerIsTrash;
@property(readonly, nonatomic) BOOL topViewControllerIsBurst;
@property(readonly, nonatomic) BOOL topViewControllerIsModal;
- (void)viewWillAppear;
- (void)_viewWillAppearForFirstTime;
- (void)a_setContainerSortOrder:(id)arg1;
- (void)a_setContainerSort:(id)arg1;
- (void)a_clearSearchField:(id)arg1;
- (void)a_showServiceAndSupport:(id)arg1;
- (void)a_showKeyboardShortcuts:(id)arg1;
- (void)a_learnAboutPrintProducts:(id)arg1;
- (void)a_showPhotosQuickTour:(id)arg1;
- (void)a_toggleAlwaysShowToolbarInFullScreen:(id)arg1;
- (void)a_find:(id)arg1;
- (void)a_sharePhotosToSharekit:(id)arg1;
- (void)a_startSlideshow:(id)arg1;
- (void)a_consolidateOriginal:(id)arg1;
- (void)a_exportSlideshow:(id)arg1;
- (void)a_exportOriginal:(id)arg1;
- (void)a_export:(id)arg1;
- (void)a_print:(id)arg1;
- (void)a_manageKeywords:(id)arg1;
- (void)a_createMenuItemAction:(id)arg1;
- (void)a_playButton:(id)arg1;
- (void)a_toggleCreateMenuPopover:(id)arg1;
- (void)a_toggleiCloudWindow:(id)arg1;
- (void)a_toggleShareWindow:(id)arg1;
- (void)a_toggleShowHiddenPhotosAlbum:(id)arg1;
- (void)a_toggleShowFacesOverlays:(id)arg1;
- (void)a_addFolder:(id)arg1;
- (void)a_newSmartAlbum:(id)arg1;
- (void)a_newEmptyAlbum:(id)arg1;
- (void)a_newAlbum:(id)arg1;
- (void)viewWillLayout;
- (void)toggleSidebarAnimated:(BOOL)arg1;
- (void)a_showSidebar:(id)arg1;
- (void)a_navigateToImport:(id)arg1;
- (void)a_navigateToProjects:(id)arg1;
- (void)a_navigateToAlbums:(id)arg1;
- (void)a_navigateToShared:(id)arg1;
- (void)a_navigateToMemories:(id)arg1;
- (void)a_navigateToPhotos:(id)arg1;
- (void)a_toggleInspector:(id)arg1;
- (void)a_hideInspector:(id)arg1;
- (void)a_showInspector:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)sharedPhotoStreamsLibraryChanged:(id)arg1 error:(id)arg2;
- (void)sharedTabSwitchToStreamsWhenNoLibraryContent;
- (void)startListeningForSystemLibraryChanges;
- (void)setPhotosHasContent;
- (BOOL)photosHasContent;
- (id)barControlForAction:(SEL)arg1;
- (void)saveZoomLevel:(unsigned long long)arg1 forGridWithIdentifier:(id)arg2;
- (unsigned long long)zoomLevelForGridWithIdentifier:(id)arg1;
- (void)toggleCreateMenuPopoverWithSelection:(id)arg1 sender:(id)arg2;
- (void)toggleCreateMenuPopoverWithSelection:(id)arg1 forToolbar:(BOOL)arg2 sender:(id)arg3;
- (void)toggleShareMenuPopoverWithSelection:(id)arg1 allServices:(BOOL)arg2 sender:(id)arg3;
- (void)createNewEmptyAlbumInFolder:(id)arg1;
- (void)createNewAlbumInFolder:(id)arg1;
- (id)newEditorControllerWithObjectsController:(id)arg1 takingOwnership:(BOOL)arg2 selectedVersions:(id)arg3 primarySelection:(id)arg4 options:(id)arg5;
@property(readonly) BOOL isShowingSearchResults;
@property(readonly, nonatomic) IPXViewController *topViewController;
- (void)_updateInspectorVisibility;
- (void)_presentPhotoPickerWithCollection:(id)arg1 preselectedVersions:(id)arg2 allowedMediaTypes:(id)arg3 subtitleHandler:(CDUnknownBlockType)arg4 collectionName:(id)arg5 selection:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)showAlbumsBrowserForDatabaseObject:(id)arg1;
- (void)_showTrashBrowser;
- (id)_controllerForBrowser:(id)arg1 createIfNecessary:(BOOL)arg2;
- (void)_releaseDatabaseResource:(id)arg1;
- (void)closeWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterWorkspaceNotificationsReceiver:(struct NSObject *)arg1;
- (void)registerWorkspaceNotificationsReceiver:(struct NSObject *)arg1;
- (void)closeLibraryAndInvokeCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 undoManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

