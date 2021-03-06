//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DBPrefsWindowController.h"

#import "NSOutlineViewDataSource-Protocol.h"
#import "NSTabViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class APP, BTTActionSelectorViewController, BTTCPTextField, BTTHotKeyRegistrator, BTTMouseClickRecognizer, BTTScalingBezierPathView, ESTreeController, Gesture, KeyShortcutsFieldEditor, MAAttachedWindow, NSArray, NSArrayController, NSButton, NSButtonCell, NSColor, NSComboBox, NSImageView, NSMenu, NSNumber, NSOutlineView, NSPanel, NSPopUpButton, NSPopover, NSPredicate, NSScrollView, NSSecureTextField, NSSplitView, NSString, NSTabView, NSTableView, NSTextField, NSTimer, NSUndoManager, NSView, NSWindowController, RecorderTextField, SRRecorderControl, TouchViewWC, WebView, WebViewJavascriptBridge;

__attribute__((visibility("hidden")))
@interface WindowController : DBPrefsWindowController <NSTabViewDelegate, NSTextFieldDelegate, NSOutlineViewDataSource, NSWindowDelegate, NSTableViewDataSource>
{
    NSTabView *tabView;
    APP *copiedApp;
    SRRecorderControl *keyboardShortcutRecorder;
    NSTableView *appsTableView;
    NSButtonCell *theCell;
    WebView *webInfoView;
    MAAttachedWindow *attachedWindow;
    NSView *advancedToggleView;
    double accel;
    NSNumber *acceleration;
    BOOL apiActivated;
    NSArrayController *appsController;
    NSColor *backgroundColorP;
    NSColor *borderColorP;
    KeyShortcutsFieldEditor *fieldEditor;
    ESTreeController *gesturesController;
    NSArray *gesturesSorter;
    NSArray *globalAboveAll;
    unsigned int h;
    NSPredicate *isMagicMouse;
    NSPredicate *isTouchpad;
    int kr;
    NSOutlineView *magicMouseTableView;
    NSOutlineView *normalMiceTableView;
    NSOutlineView *pluginTableView;
    NSComboBox *presets;
    NSArrayController *presetsController;
    NSArrayController *startupController;
    NSPopUpButton *profiles;
    double restoreAccel;
    double restoreSpeed;
    long long selectedIndex;
    NSString *selectedPreset;
    ESTreeController *shortcutController;
    NSOutlineView *shortcutTableView;
    double speed;
    NSNumber *touchpadAcceleration;
    ESTreeController *touchpadGesturesController;
    ESTreeController *normalMiceController;
    ESTreeController *pluginController;
    NSOutlineView *touchpadTableView;
    TouchViewWC *touchViewWC;
    BTTCPTextField *urlField;
    BTTCPTextField *stringField;
    NSTimer *warningMessageTimer;
    NSPredicate *isNormalMouse;
    NSPredicate *isPlugin;
    BTTMouseClickRecognizer *clickRecognizer;
    NSTextField *recognizedClickField;
    NSView *gestureView;
    NSView *generalView;
    NSView *snappingView;
    NSView *advMouseView;
    NSView *advTrackpadView;
    NSView *aboutView;
    NSView *easyView;
    NSString *modalContentString;
    NSPanel *urlPanel;
    NSPanel *stringPanel;
    NSMenu *magicMouseMenu;
    BOOL _hideConfigurationButton;
    BOOL _enableWCUndoManager;
    NSOutlineView *bttRemoteTableView;
    ESTreeController *bttRemoteArrayController;
    RecorderTextField *_c11;
    RecorderTextField *_c10;
    NSButton *_trialButton;
    RecorderTextField *_c9;
    RecorderTextField *_c8;
    RecorderTextField *_c7;
    RecorderTextField *_c6;
    RecorderTextField *_c5;
    RecorderTextField *_c4;
    RecorderTextField *_c3;
    RecorderTextField *_c2;
    RecorderTextField *_c1;
    NSSecureTextField *_bttRemotePasswordField;
    NSTabView *_remoteActionTabView;
    NSSecureTextField *_passwordField;
    NSView *_newsView;
    WebView *_newsWebView;
    id _eventMonitor;
    NSTimer *_apiCheckTimer;
    NSColor *_drawingStrokeColor;
    NSColor *_drawingBackgroundColor;
    NSTextField *_aboutTrialString;
    NSWindowController *_modalWindowController;
    NSPredicate *_isSiriRemote;
    NSPredicate *_isTouchBar;
    NSOutlineView *_leapOutlineView;
    NSOutlineView *_siriRemoteOutlineView;
    ESTreeController *_touchBarTC;
    ESTreeController *_siriRemoteTC;
    ESTreeController *_leapTreeController;
    ESTreeController *_otherTriggerTreeController;
    NSOutlineView *_touchbarOutlineView;
    NSPredicate *_isBTTRemote;
    NSArray *_byOrderSorter;
    NSButton *_bttRemoteImageButton;
    BTTHotKeyRegistrator *_hotkeyRegistrator;
    NSButton *_mmbutton;
    NSButton *_tpbutton;
    NSButton *_keyboardbutton;
    NSButton *_siriRemoteButton;
    NSButton *_touchbarButton;
    NSButton *_leapbutton;
    NSButton *_otherbutton;
    NSButton *_bttremotebutton;
    NSButton *_normalMouseButton;
    NSOutlineView *_otherTriggersOutlineView;
    NSImageView *_leapDevMessageView;
    NSButton *_leapDevMessageButton;
    NSButton *_leapStatusIcon;
    NSTextField *_leapStatusLabel;
    NSButton *_drawingButton;
    BTTScalingBezierPathView *_scalingBezierPathView;
    NSString *_lastIdentifier;
    NSSplitView *_topbottomSplitView;
    NSSplitView *_leftrightSplitView;
    NSScrollView *_presetScrollView;
    NSView *_presetView;
    BTTActionSelectorViewController *_actionSelectorViewController;
    NSPopover *_actionSelectorPopover;
    NSSplitView *_gestureSplitViewTop;
    NSImageView *_animatedMagicMouseImageView;
    NSOutlineView *_drawingOutlineView;
    ESTreeController *_drawingTC;
    NSTabView *_advancedSettingsTabView;
    NSUndoManager *_undoManager;
    NSTextField *_leapCPUWarning;
    NSTextField *_touchBarButtonNameField;
    NSButton *_recordKeySequenceButton;
    NSTabView *_shortcutKeysequenceTabView;
    NSPopUpButton *_appSpecificButton;
    Gesture *_copiedGesture;
    WebViewJavascriptBridge *_bridge;
}

+ (id)stringByGeneratingUUID;
+ (id)sharedPrefsWindowController;
@property(retain, nonatomic) WebViewJavascriptBridge *bridge; // @synthesize bridge=_bridge;
@property(retain, nonatomic) Gesture *copiedGesture; // @synthesize copiedGesture=_copiedGesture;
@property(nonatomic) BOOL enableWCUndoManager; // @synthesize enableWCUndoManager=_enableWCUndoManager;
@property(nonatomic) NSPopUpButton *appSpecificButton; // @synthesize appSpecificButton=_appSpecificButton;
@property(nonatomic) NSTabView *shortcutKeysequenceTabView; // @synthesize shortcutKeysequenceTabView=_shortcutKeysequenceTabView;
@property(nonatomic) NSButton *recordKeySequenceButton; // @synthesize recordKeySequenceButton=_recordKeySequenceButton;
@property NSTextField *touchBarButtonNameField; // @synthesize touchBarButtonNameField=_touchBarButtonNameField;
@property NSTextField *leapCPUWarning; // @synthesize leapCPUWarning=_leapCPUWarning;
@property(retain) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property NSTabView *advancedSettingsTabView; // @synthesize advancedSettingsTabView=_advancedSettingsTabView;
@property(retain) ESTreeController *drawingTC; // @synthesize drawingTC=_drawingTC;
@property NSOutlineView *drawingOutlineView; // @synthesize drawingOutlineView=_drawingOutlineView;
@property NSImageView *animatedMagicMouseImageView; // @synthesize animatedMagicMouseImageView=_animatedMagicMouseImageView;
@property(nonatomic) NSSplitView *gestureSplitViewTop; // @synthesize gestureSplitViewTop=_gestureSplitViewTop;
@property(nonatomic) NSPopover *actionSelectorPopover; // @synthesize actionSelectorPopover=_actionSelectorPopover;
@property(retain, nonatomic) BTTActionSelectorViewController *actionSelectorViewController; // @synthesize actionSelectorViewController=_actionSelectorViewController;
@property NSView *presetView; // @synthesize presetView=_presetView;
@property NSScrollView *presetScrollView; // @synthesize presetScrollView=_presetScrollView;
@property NSSplitView *leftrightSplitView; // @synthesize leftrightSplitView=_leftrightSplitView;
@property NSSplitView *topbottomSplitView; // @synthesize topbottomSplitView=_topbottomSplitView;
@property(copy, nonatomic) NSString *lastIdentifier; // @synthesize lastIdentifier=_lastIdentifier;
@property BTTScalingBezierPathView *scalingBezierPathView; // @synthesize scalingBezierPathView=_scalingBezierPathView;
@property NSButton *drawingButton; // @synthesize drawingButton=_drawingButton;
@property NSTextField *leapStatusLabel; // @synthesize leapStatusLabel=_leapStatusLabel;
@property NSButton *leapStatusIcon; // @synthesize leapStatusIcon=_leapStatusIcon;
@property NSButton *leapDevMessageButton; // @synthesize leapDevMessageButton=_leapDevMessageButton;
@property NSImageView *leapDevMessageView; // @synthesize leapDevMessageView=_leapDevMessageView;
@property NSOutlineView *otherTriggersOutlineView; // @synthesize otherTriggersOutlineView=_otherTriggersOutlineView;
@property NSButton *normalMouseButton; // @synthesize normalMouseButton=_normalMouseButton;
@property NSButton *bttremotebutton; // @synthesize bttremotebutton=_bttremotebutton;
@property NSButton *otherbutton; // @synthesize otherbutton=_otherbutton;
@property NSButton *leapbutton; // @synthesize leapbutton=_leapbutton;
@property NSButton *touchbarButton; // @synthesize touchbarButton=_touchbarButton;
@property NSButton *siriRemoteButton; // @synthesize siriRemoteButton=_siriRemoteButton;
@property NSButton *keyboardbutton; // @synthesize keyboardbutton=_keyboardbutton;
@property NSButton *tpbutton; // @synthesize tpbutton=_tpbutton;
@property NSButton *mmbutton; // @synthesize mmbutton=_mmbutton;
@property(retain, nonatomic) BTTHotKeyRegistrator *hotkeyRegistrator; // @synthesize hotkeyRegistrator=_hotkeyRegistrator;
@property NSButton *bttRemoteImageButton; // @synthesize bttRemoteImageButton=_bttRemoteImageButton;
@property(retain, nonatomic) NSArray *byOrderSorter; // @synthesize byOrderSorter=_byOrderSorter;
@property(retain, nonatomic) NSPredicate *isBTTRemote; // @synthesize isBTTRemote=_isBTTRemote;
@property(nonatomic) NSOutlineView *touchbarOutlineView; // @synthesize touchbarOutlineView=_touchbarOutlineView;
@property(retain, nonatomic) ESTreeController *otherTriggerTreeController; // @synthesize otherTriggerTreeController=_otherTriggerTreeController;
@property(retain, nonatomic) ESTreeController *leapTreeController; // @synthesize leapTreeController=_leapTreeController;
@property(retain, nonatomic) ESTreeController *siriRemoteTC; // @synthesize siriRemoteTC=_siriRemoteTC;
@property(retain) ESTreeController *touchBarTC; // @synthesize touchBarTC=_touchBarTC;
@property(retain, nonatomic) NSOutlineView *siriRemoteOutlineView; // @synthesize siriRemoteOutlineView=_siriRemoteOutlineView;
@property NSOutlineView *leapOutlineView; // @synthesize leapOutlineView=_leapOutlineView;
@property(retain, nonatomic) NSPredicate *isTouchBar; // @synthesize isTouchBar=_isTouchBar;
@property(retain, nonatomic) NSPredicate *isSiriRemote; // @synthesize isSiriRemote=_isSiriRemote;
@property(retain, nonatomic) NSWindowController *modalWindowController; // @synthesize modalWindowController=_modalWindowController;
@property NSTextField *aboutTrialString; // @synthesize aboutTrialString=_aboutTrialString;
@property(retain, nonatomic) NSColor *drawingBackgroundColor; // @synthesize drawingBackgroundColor=_drawingBackgroundColor;
@property(retain, nonatomic) NSColor *drawingStrokeColor; // @synthesize drawingStrokeColor=_drawingStrokeColor;
@property(retain, nonatomic) NSTimer *apiCheckTimer; // @synthesize apiCheckTimer=_apiCheckTimer;
@property(retain, nonatomic) id eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property WebView *newsWebView; // @synthesize newsWebView=_newsWebView;
@property(nonatomic) NSView *newsView; // @synthesize newsView=_newsView;
@property NSSecureTextField *passwordField; // @synthesize passwordField=_passwordField;
@property NSTabView *remoteActionTabView; // @synthesize remoteActionTabView=_remoteActionTabView;
@property NSSecureTextField *bttRemotePasswordField; // @synthesize bttRemotePasswordField=_bttRemotePasswordField;
@property RecorderTextField *c1; // @synthesize c1=_c1;
@property RecorderTextField *c2; // @synthesize c2=_c2;
@property RecorderTextField *c3; // @synthesize c3=_c3;
@property RecorderTextField *c4; // @synthesize c4=_c4;
@property RecorderTextField *c5; // @synthesize c5=_c5;
@property RecorderTextField *c6; // @synthesize c6=_c6;
@property RecorderTextField *c7; // @synthesize c7=_c7;
@property RecorderTextField *c8; // @synthesize c8=_c8;
@property(nonatomic) BOOL hideConfigurationButton; // @synthesize hideConfigurationButton=_hideConfigurationButton;
@property RecorderTextField *c9; // @synthesize c9=_c9;
@property NSButton *trialButton; // @synthesize trialButton=_trialButton;
@property RecorderTextField *c10; // @synthesize c10=_c10;
@property RecorderTextField *c11; // @synthesize c11=_c11;
@property(nonatomic) NSOutlineView *shortcutTableView; // @synthesize shortcutTableView;
@property(retain, nonatomic) ESTreeController *bttRemoteArrayController; // @synthesize bttRemoteArrayController;
@property(nonatomic) NSOutlineView *bttRemoteTableView; // @synthesize bttRemoteTableView;
@property(nonatomic) NSTabView *tabView; // @synthesize tabView;
@property(retain, nonatomic) ESTreeController *shortcutController; // @synthesize shortcutController;
@property(retain, nonatomic) NSMenu *magicMouseMenu; // @synthesize magicMouseMenu;
@property(retain, nonatomic) APP *copiedApp; // @synthesize copiedApp;
@property(copy) NSString *modalContentString; // @synthesize modalContentString;
@property(retain, nonatomic) SRRecorderControl *keyboardShortcutRecorder; // @synthesize keyboardShortcutRecorder;
@property(retain, nonatomic) NSTextField *recognizedClickField; // @synthesize recognizedClickField;
@property(retain, nonatomic) BTTMouseClickRecognizer *clickRecognizer; // @synthesize clickRecognizer;
@property(retain, nonatomic) NSOutlineView *normalMiceTableView; // @synthesize normalMiceTableView;
@property(retain, nonatomic) NSPredicate *isPlugin; // @synthesize isPlugin;
@property(retain, nonatomic) NSPredicate *isNormalMouse; // @synthesize isNormalMouse;
@property(retain, nonatomic) NSOutlineView *pluginTableView; // @synthesize pluginTableView;
@property(retain, nonatomic) ESTreeController *pluginController; // @synthesize pluginController;
@property(retain, nonatomic) ESTreeController *normalMiceController; // @synthesize normalMiceController;
@property(retain, nonatomic) KeyShortcutsFieldEditor *fieldEditor; // @synthesize fieldEditor;
@property(retain, nonatomic) NSTimer *warningMessageTimer; // @synthesize warningMessageTimer;
@property(retain, nonatomic) NSColor *borderColorP; // @synthesize borderColorP;
@property(retain, nonatomic) NSColor *backgroundColorP; // @synthesize backgroundColorP;
@property(nonatomic) BOOL apiActivated; // @synthesize apiActivated;
@property(retain, nonatomic) NSArray *gesturesSorter; // @synthesize gesturesSorter;
@property(retain, nonatomic) TouchViewWC *touchViewWC; // @synthesize touchViewWC;
@property(retain, nonatomic) NSNumber *touchpadAcceleration; // @synthesize touchpadAcceleration;
@property(copy) NSString *selectedPreset; // @synthesize selectedPreset;
@property(nonatomic) NSComboBox *presets; // @synthesize presets;
@property(retain, nonatomic) ESTreeController *touchpadGesturesController; // @synthesize touchpadGesturesController;
@property(retain, nonatomic) ESTreeController *gesturesController; // @synthesize gesturesController;
@property(retain, nonatomic) NSOutlineView *magicMouseTableView; // @synthesize magicMouseTableView;
@property(retain, nonatomic) NSOutlineView *touchpadTableView; // @synthesize touchpadTableView;
@property(retain, nonatomic) NSArray *globalAboveAll; // @synthesize globalAboveAll;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex;
@property(retain, nonatomic) NSPredicate *isMagicMouse; // @synthesize isMagicMouse;
@property(retain, nonatomic) NSPredicate *isTouchpad; // @synthesize isTouchpad;
@property(retain, nonatomic) NSArrayController *presetsController; // @synthesize presetsController;
@property(retain, nonatomic) NSNumber *acceleration; // @synthesize acceleration;
@property(retain, nonatomic) NSArrayController *appsController; // @synthesize appsController;
- (void)dealloc;
- (void)clickedOnNowAvailableImage:(id)arg1;
- (void)leapNoticeAcknowledged:(id)arg1;
- (void)reportBug:(id)arg1;
- (void)restartApp:(id)arg1;
- (void)setlaunchOnStartup:(id)arg1;
- (BOOL)getLaunchOnStartup;
- (void)donate:(id)arg1;
- (void)openButtonURL:(id)arg1;
- (void)openMouseModeDocumentation;
- (void)openSiriRemoteDocumentation:(id)arg1;
- (void)reset:(id)arg1;
- (void)disableAcceleration:(id)arg1;
- (void)setTouchpadAccel:(id)arg1;
- (void)setTouchpadAccelerationTo:(double)arg1;
- (void)setAccel:(id)arg1;
- (void)setMouseAccelerationTo:(double)arg1;
- (void)disableMomentumScrollingForSelectedApp:(id)arg1;
- (double)getAccel;
- (void)createMenuForButton:(id)arg1;
- (void)chooseWorkflow:(id)arg1;
- (void)chooseLaunchApp:(id)arg1;
- (void)chooseShowHideApp:(id)arg1;
- (void)chooseOpenWithApp:(id)arg1 folderOnly:(BOOL)arg2;
- (void)chooseOpenAppWithApp:(id)arg1;
- (void)chooseOpenFolderWithApp:(id)arg1;
- (void)chooseUnlockScreenPassword:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)showActionSelectorPopover:(id)arg1;
- (void)saveStringToPaste:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showStringSheet:(id)arg1;
- (void)saveCustomTextToPaste:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showPasteCustomTextSheet:(id)arg1;
- (void)saveURL:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showURLSheet:(id)arg1;
- (void)saveMenubarClick:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showMenubarClickSheet:(id)arg1;
- (void)saveContextMenuClick:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showContextMenuClickSheet:(id)arg1;
- (void)crashBTT:(id)arg1;
- (void)touchbarIconChanged:(id)arg1;
- (void)remoteAppIconChanged:(id)arg1;
- (void)remoteActionNameChanged:(id)arg1;
- (void)touchbarActionNameChanged:(id)arg1;
- (void)deleteTouchBarAction:(id)arg1;
- (void)deleteRemoteAppAction:(id)arg1;
- (void)changedPassword:(id)arg1;
- (void)disableBTTRemote:(id)arg1;
- (void)showTapSequenceSelector;
- (void)saveDelay:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showDelaySheet:(id)arg1;
- (void)saveMousePosition:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showMousePositionSheet:(id)arg1;
- (void)saveKeySequence:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showKeySequenceConfigurator:(id)arg1;
- (void)saveCustomTapSequence:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)saveShortcutForApp:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showSendShortcutToAppSheet:(id)arg1;
- (void)savePreset:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showPresetSheet:(id)arg1;
- (void)saveDistributedNotification:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showDistributedNotificationSheet:(id)arg1;
- (void)saveTerminalCommand:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showTerminalCommandSheet:(id)arg1;
- (void)saveAppleScript:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showAppleScriptSheet:(id)arg1;
- (void)saveReceiveNotification:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showReceiveNotificationSheet:(id)arg1;
- (void)saveCustomClick:(id)arg1;
- (void)showSiriRemotePairingInfo:(id)arg1;
- (void)openSiriRemoteMouseModeDocumentation;
- (void)showCustomClickSheet:(id)arg1;
- (void)saveGestureTraits:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showGestureTraitsSheet:(id)arg1;
- (void)showEmojs:(id)arg1;
- (void)saveTouchBarTraits:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showTouchBarTraitSheet:(id)arg1;
- (void)resetTouchBarIcon:(id)arg1;
- (void)showTouchBarSettings:(id)arg1;
- (void)showAppropriateSheetForSelectedGesture:(id)arg1;
- (void)configureOtherTrigger:(id)arg1;
- (void)saveCustomCWC:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showDisableGestureRecognitionSheet:(id)arg1;
- (void)saveDisableGestureRecognitionSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showLeapMouseConfigurator:(id)arg1;
- (void)showMouseClickHelp:(id)arg1;
- (void)saveScreenshotConfig:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showScreenshotConfigurator:(id)arg1;
- (void)lockSelected:(id)arg1;
- (void)saveLeapMouseConfiguration:(id)arg1;
- (void)copyLinkToTrigger:(id)arg1;
- (void)copyGesturesToClipboard:(id)arg1;
- (void)setString:(id)arg1 forAction:(long long)arg2;
- (void)resetShortcut:(id)arg1;
- (id)currentlySelectedObject;
- (id)currentlyVisibleTableView;
- (id)currentlyVisibleController;
- (void)updateSelectedIndex;
- (void)showLegacySupportMenu:(id)arg1;
- (void)showIcons:(id)arg1;
- (void)showSnapAreaSettings;
- (void)selectTouchBarTab;
- (void)selectBTTRemoteTab;
- (void)selectLeapTab;
- (void)selectKeyboardTab;
- (void)dontShowMenubarIcon:(id)arg1;
- (void)exportPreset:(id)arg1;
- (void)importPreset:(id)arg1;
- (BOOL)importPresetFromFolder:(id)arg1;
- (void)changeStore:(id)arg1;
- (void)renamePreset:(id)arg1;
- (void)createNewPreset:(id)arg1;
- (void)removePreset:(id)arg1;
- (void)showSnapAreaHelpy:(id)arg1;
- (void)resetSnapAreas:(id)arg1;
- (void)importSnapAreas:(id)arg1;
- (void)comboBoxSelectionDidChange:(id)arg1;
- (void)enableDrawing:(id)arg1;
- (void)chooseURL:(id)arg1;
- (void)showCMDClickWarning:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setActionWithTag:(id)arg1;
- (void)setGestureWithTag:(id)arg1;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (void)setNormalMouseButtonGesture:(id)arg1;
- (void)refreshWarning:(id)arg1;
- (void)triggerSelected:(id)arg1;
- (void)setColor:(id)arg1;
- (void)addMouseGesture:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (id)copyGesture:(id)arg1 toApp:(id)arg2 withParent:(id)arg3;
- (id)copyGesture:(id)arg1 toApp:(id)arg2;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)addAdditionalAction:(id)arg1;
- (void)deleteSelectedAndItsChildren:(id)arg1;
- (void)saveSelectedDragPoint:(id)arg1;
- (void)selectSnapArea;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)actionNameForGesture:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)disableAutoUpdates:(id)arg1;
- (void)selectStartupApplication:(id)arg1;
- (void)chooseNewAppMT;
- (void)chooseNewApp:(id)arg1;
- (void)fakeChangeValue:(id)arg1;
- (void)installPrefPane:(id)arg1;
- (void)addDrawingGesture:(id)arg1;
- (void)configureDrawingGesture:(id)arg1;
- (void)saveDrawingGesture:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showMouseButtonInstructions:(id)arg1;
- (void)showDrawingInstructions:(id)arg1;
- (void)addTouchBarButton:(id)arg1;
- (void)addOtherTrigger:(id)arg1;
- (void)addLeapGesture:(id)arg1;
- (void)addNewShortcut:(id)arg1;
- (void)addNewSiriRemoteGesture:(id)arg1;
- (void)addBTTRemoteGesture:(id)arg1;
- (void)addPluginGesture:(id)arg1;
- (void)addNewNormalMouseGesture:(id)arg1;
- (void)addNewTouchpadGesture:(id)arg1;
- (void)addNewMouseGesture:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)addSiriRemoteExamples:(id)arg1;
- (void)addNewGestureForTouchpadMT:(long long)arg1;
- (void)addNewGestureForTouchpad:(long long)arg1;
- (void)autoDetectMacType:(id)arg1;
- (void)awakeFromNib;
- (void)setUpdateURL:(id)arg1;
- (void)userDefaultsChanged;
- (void)showTouchWindow:(id)arg1;
- (void)openKeyboardPrefpane:(id)arg1;
- (void)listSubviewsOfView:(id)arg1;
- (id)setInitialStuff;
- (void)addDefaultApps;
- (void)checkApiActivated;
- (void)activateAccessibility:(id)arg1;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (void)windowWillClose:(id)arg1;
- (void)selectGlobal;
- (void)windowDidLoad;
- (id)calculateeUsageDataWithSortedDates:(id)arg1;
- (void)displayViewForIdentifier:(id)arg1 animate:(BOOL)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)appSelectionChanged;
- (void)setRemoteSpecial:(id)arg1;
- (void)setActionWithPopupButton:(id)arg1;
- (void)setTouchBarMode:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)disableBTTCompletely:(id)arg1;
- (void)disableWindowSnappingForApp:(id)arg1;
- (void)disableHorizontalSingleFingerScrolling:(id)arg1;
- (void)disableSingleFingerScrolling:(id)arg1;
- (void)pasteAppGestures:(id)arg1;
- (void)copyAppGestures:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)toggleWindowSnappingEverything:(id)arg1;
- (void)showInformationForGestureIDReally:(id)arg1;
- (void)configureCurrentAction:(id)arg1;
- (void)showInformationForGestureWithButton:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (BOOL)allowPopoverClose;
- (void)allowOpenAgain;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)selectTabWithButton:(id)arg1;
- (void)closeAttachedWindow;
- (void)sensitivtySliderTPMoved:(id)arg1;
- (void)sensitivtySliderMMMoved:(id)arg1;
- (void)setupToolbarAdvanced:(id)arg1;
- (void)setupToolbarSimple:(id)arg1;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)showRegistration:(id)arg1;
- (void)printGestures:(id)arg1;
- (void)exportLicense:(id)arg1;
- (id)printGesture:(id)arg1 toHTMLTable:(id)arg2;
- (void)menubarIconStateChanged:(id)arg1;
- (void)dockIconStateChanged:(id)arg1;
- (void)checkLeapConnected:(BOOL)arg1;
- (void)resetAllKnownDevices:(id)arg1;
- (void)brightnessChangerStateChanged:(id)arg1;
- (BOOL)deleteGesture:(id)arg1;
- (BOOL)pasteGesture:(id)arg1;
- (BOOL)selectAllGestures:(id)arg1;
- (BOOL)copyGesture:(id)arg1;
- (BOOL)quitApplication:(id)arg1;
- (BOOL)closeWindow:(id)arg1;
- (BOOL)redo:(id)arg1;
- (BOOL)undo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

