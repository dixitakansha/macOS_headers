//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IFXLogWindowController, NSMenuItem, NSMutableArray, NSOpenPanel, NSString, NSTask;
@protocol IAApplicationControllerDelegate;

@interface IAApplicationController : NSObject
{
    NSMenuItem *uiQuitMenuItem;
    NSString *_choiceChangesXMLFilePath;
    NSMutableArray *_pageControllers;
    NSMutableArray *_pendingPageControllerPaths;
    IFXLogWindowController *_logWindowController;
    NSTask *_utilityTask;
    struct CGPoint _documentCascadePoint;
    BOOL _packageOpenAttempted;
    BOOL _openPanelWasShown;
    BOOL _shouldStoreLastPackageOpenedPath;
    NSOpenPanel *_openPanel;
    id <IAApplicationControllerDelegate> _delegate;
}

@property(retain, nonatomic) id <IAApplicationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)isTesting;
- (void)closeFirstPackageWindow;
- (id)firstPackageWindow;
- (void)_willPerformPostInstallAction:(id)arg1;
- (void)logWindowWillClose;
- (void)iaShowLog:(id)arg1;
- (void)showAboutBox:(id)arg1;
- (void)iaOpenPackage:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (id)openFile:(id)arg1 windowRestore:(BOOL)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)addUtilityMenus;
- (void)iaClose:(id)arg1;
- (id)init;
- (void)application:(id)arg1 runTest:(unsigned long long)arg2 duration:(double)arg3;
- (id)selfTestDistro;
- (void)_recursivelyDisableMenu:(id)arg1;
- (void)_disableMenuItem:(id)arg1 withAction:(SEL)arg2;
- (void)_setWindowPositionForWindow:(id)arg1;
- (void)_closeThePackage:(id)arg1;
- (void)terminateIfNoPageControllersExist;
- (void)_closeThePackageWithPageController:(id)arg1;
- (void)_openPackageInPath:(id)arg1 withSelectedFile:(id)arg2;
- (void)_sendInstallLogToApple:(id)arg1;
- (void)_startupDiskExited:(id)arg1;
- (void)_helperAppExited:(id)arg1;
- (void)_helperAppLaunchedNotification:(id)arg1;
- (void)_launchUtilityApplication:(id)arg1;
- (void)_launchStartupDisk:(id)arg1;
- (void)_launchHelperAppWithPath:(id)arg1 withFinishedSelector:(SEL)arg2;

@end

