//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "AMMediaPanelObserver-Protocol.h"
#import "AMWorkflowControllerDelegatePrivate-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class AMAction, AMDocument, AMGlossyStatusView, AMLibraryViewController, AMLoadingErrorsDisplayController, AMLogViewController, AMSplitView, AMTemplateChooserDisplayController, AMVariablesViewController, AMWorkflowController, AMWorkflowLog, AMWorkflowView, NSButton, NSDictionary, NSProgressIndicator, NSString, NSTabView, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface AMDocumentWindowController : NSWindowController <NSTouchBarDelegate, NSToolbarDelegate, NSWindowDelegate, AMMediaPanelObserver, AMWorkflowControllerDelegatePrivate>
{
    BOOL _observersAdded;
    AMLoadingErrorsDisplayController *_loadingErrorsDisplayController;
    AMWorkflowView *_workflowView;
    AMWorkflowController *_workflowController;
    AMWorkflowLog *_workflowLog;
    long long _documentWindowControllerState;
    AMTemplateChooserDisplayController *_startingPointsDisplayController;
    AMTemplateChooserDisplayController *_convertDisplayController;
    NSWindowController *_recordingHUDWindowController;
    AMLogViewController *_logViewController;
    AMVariablesViewController *_variablesViewController;
    AMLibraryViewController *_libraryViewController;
    AMAction *_recordingAction;
    NSDictionary *_labelTextAttributes;
    CDUnknownBlockType _versionBrowserExitBlock;
    AMSplitView *_majorSplitView;
    NSView *_libraryViewContainer;
    AMSplitView *_minorSplitView;
    NSTabView *_logTabView;
    AMGlossyStatusView *_statusView;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_statusField;
    NSButton *_logButton;
    NSButton *_variablesButton;
    NSButton *_workflowStatusButton;
}

+ (id)_barItemIdentifiersByValidationKeyPath;
+ (id)_barData;
+ (BOOL)hasLoadedWindow;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)playFailedSound;
+ (void)playCompletedSound;
+ (void)findAndPlaySoundNamed:(id)arg1 soundID:(unsigned int *)arg2;
@property __weak NSButton *workflowStatusButton; // @synthesize workflowStatusButton=_workflowStatusButton;
@property __weak NSButton *variablesButton; // @synthesize variablesButton=_variablesButton;
@property __weak NSButton *logButton; // @synthesize logButton=_logButton;
@property __weak NSTextField *statusField; // @synthesize statusField=_statusField;
@property __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property __weak AMGlossyStatusView *statusView; // @synthesize statusView=_statusView;
@property __weak NSTabView *logTabView; // @synthesize logTabView=_logTabView;
@property __weak AMSplitView *minorSplitView; // @synthesize minorSplitView=_minorSplitView;
@property __weak NSView *libraryViewContainer; // @synthesize libraryViewContainer=_libraryViewContainer;
@property __weak AMSplitView *majorSplitView; // @synthesize majorSplitView=_majorSplitView;
@property BOOL observersAdded; // @synthesize observersAdded=_observersAdded;
@property(copy) CDUnknownBlockType versionBrowserExitBlock; // @synthesize versionBrowserExitBlock=_versionBrowserExitBlock;
@property(retain) NSDictionary *labelTextAttributes; // @synthesize labelTextAttributes=_labelTextAttributes;
@property(retain) AMAction *recordingAction; // @synthesize recordingAction=_recordingAction;
@property(retain) AMLibraryViewController *libraryViewController; // @synthesize libraryViewController=_libraryViewController;
@property(retain) AMVariablesViewController *variablesViewController; // @synthesize variablesViewController=_variablesViewController;
@property(retain) AMLogViewController *logViewController; // @synthesize logViewController=_logViewController;
@property(retain) NSWindowController *recordingHUDWindowController; // @synthesize recordingHUDWindowController=_recordingHUDWindowController;
@property(retain, nonatomic) AMTemplateChooserDisplayController *convertDisplayController; // @synthesize convertDisplayController=_convertDisplayController;
@property(retain, nonatomic) AMTemplateChooserDisplayController *startingPointsDisplayController; // @synthesize startingPointsDisplayController=_startingPointsDisplayController;
@property long long documentWindowControllerState; // @synthesize documentWindowControllerState=_documentWindowControllerState;
@property(retain) AMWorkflowLog *workflowLog; // @synthesize workflowLog=_workflowLog;
@property(retain) AMWorkflowController *workflowController; // @synthesize workflowController=_workflowController;
@property __weak AMWorkflowView *workflowView; // @synthesize workflowView=_workflowView;
- (void).cxx_destruct;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)windowWillExitVersionBrowser:(id)arg1;
- (void)windowWillEnterVersionBrowser:(id)arg1;
- (void)hideHUD:(id)arg1;
- (void)showHUD:(id)arg1;
@property(nonatomic, getter=hudEnabled, setter=setHUDEnabled:) BOOL hudEnabled;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_updateTouchBarItemWithIdentifier:(id)arg1;
- (id)_existingTouchBarItemWithIdentifier:(id)arg1;
- (void)_configureTouchBarItem:(id)arg1 forBarDataDictionary:(id)arg2;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (id)_existingToolbarItemWithIdentifier:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)_configureToolbarItem:(id)arg1 forBarDataDictionary:(id)arg2 willBeInserted:(BOOL)arg3;
- (void)setupToolbar;
- (void)_updateToolbarItemWithIdentifier:(id)arg1;
- (id)_barDataDictionaryForBarItemIdentifier:(id)arg1 toolbarNotTouchBar:(BOOL)arg2;
- (void)deleteVariable:(id)arg1;
- (void)removeGroups:(id)arg1;
- (void)editGroup:(id)arg1;
- (void)addGroup:(id)arg1;
- (void)addSmartGroup:(id)arg1;
- (void)addAutomatorVariables:(id)arg1;
- (void)addAutomatorActions:(id)arg1;
- (void)selectActionInLibrary:(id)arg1;
- (void)showLibrary:(id)arg1;
- (void)toggleLibrary:(id)arg1;
@property(readonly, nonatomic) BOOL isShowingLibrary;
- (void)findInLibrary:(id)arg1;
- (void)didStopRecording:(id)arg1;
- (void)recordUIEvents:(id)arg1;
- (void)convertTo:(id)arg1;
- (void)document:(id)arg1 didDuplicateWithConversion:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)convertToSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)stopProgress;
- (void)startProgress;
- (void)resetWorkflow:(id)arg1;
- (void)pause:(id)arg1;
- (void)step:(id)arg1;
- (void)stop:(id)arg1;
- (void)run:(id)arg1;
- (void)mediaPanelDidClose:(id)arg1;
- (void)mediaPanelDidOpen:(id)arg1;
- (void)toggleMediaPanel:(id)arg1;
@property(readonly, nonatomic, getter=isShowingMediaPanel) BOOL showingMediaPanel;
- (void)toggleVariablesView:(id)arg1;
- (void)showVariablesView:(id)arg1;
- (void)toggleWorkflowLog:(id)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)showWorkflowLog:(id)arg1;
- (BOOL)isShowingLogView;
- (void)updateStatusBarButtons;
- (id)workflowFinishedStatusMessageWithError:(id)arg1;
- (void)startingPointsSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)displayStartingPoints;
- (void)displayLoadingErrors:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)workflow:(id)arg1 didAddVariable:(id)arg2;
- (void)workflowController:(id)arg1 workflowWasModified:(id)arg2;
- (void)workflowController:(id)arg1 didLogMessage:(id)arg2 ofType:(unsigned long long)arg3 fromAction:(id)arg4;
- (void)workflowController:(id)arg1 didError:(id)arg2;
- (id)willPresentError:(id)arg1;
- (void)workflowController:(id)arg1 didRunConversion:(id)arg2;
- (void)workflowController:(id)arg1 willRunConversion:(id)arg2;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (void)workflowController:(id)arg1 willRunAction:(id)arg2;
- (void)workflowControllerDidPause:(id)arg1;
- (void)workflowControllerDidStop:(id)arg1;
- (void)workflowControllerDidRun:(id)arg1;
- (void)workflowController:(id)arg1 didResumeWithAction:(id)arg2;
- (void)workflowControllerWillRun:(id)arg1;
- (void)notifyWorkflowOfActivation;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
@property(readonly, nonatomic) BOOL personalityControllerExists;
@property(readonly, nonatomic) BOOL canToggleLibrary;
@property(readonly, nonatomic) BOOL canToggleMediaPanel;
@property(readonly, nonatomic) BOOL isRunning;
- (BOOL)isPaused;
@property(readonly, nonatomic) BOOL canStep;
@property(readonly, nonatomic) BOOL canStop;
@property(readonly, nonatomic) BOOL canRunOrPause;
@property(readonly, nonatomic) BOOL canRun;
@property(readonly, nonatomic) BOOL canRecord;
@property(readonly, nonatomic) BOOL documentIsInViewingMode;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
@property(readonly, nonatomic) AMLoadingErrorsDisplayController *loadingErrorsDisplayController; // @synthesize loadingErrorsDisplayController=_loadingErrorsDisplayController;
- (void)windowDidLoad;
- (void)dealloc;
- (void)removeFromMaps_ask;
- (void)recursiveRemoveFromMaps:(id)arg1;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property AMDocument *document; // @dynamic document;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

