//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSApplicationDelegate-Protocol.h"
#import "NSFileManagerDelegate-Protocol.h"
#import "NSOpenSavePanelDelegate-Protocol.h"

@class NSLock, NSMutableArray, NSPreferencePane, NSString, NSView, NSWindow;

@interface BAHController : NSObject <NSOpenSavePanelDelegate, NSFileManagerDelegate, NSApplicationDelegate>
{
    NSLock *_inflightObjectsLock;
    NSMutableArray *_inflightObjects;
    NSMutableArray *_pendingObjects;
    BOOL _trace;
    BOOL _applicationWillFinishLaunchingSeen;
    BOOL _applicationDidFinishLaunchingSeen;
    BOOL _wasLaunchedWithDocuments;
    BOOL _userSelectedAnyMenuItem;
    BOOL _finderShouldBeActivated;
    BOOL _applicationHasBeenDeactivated;
    NSWindow *_prefsWindow;
    NSView *_prefsView;
    NSPreferencePane *_preferencePane;
}

+ (void)initialize;
+ (id)sharedInstance;
@property(retain, nonatomic) NSPreferencePane *preferencePane; // @synthesize preferencePane=_preferencePane;
- (void).cxx_destruct;
- (BOOL)finderShouldBeActivated;
- (void)setFinderShouldBeActivated:(BOOL)arg1;
- (BOOL)trace;
- (id)magicInfoForFile_NSTask:(id)arg1;
- (id)magicInfoForFile:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)removeFromInUseArray:(id)arg1;
- (id)movePendingItemToInUseArray;
- (BOOL)addToInUseArray:(id)arg1 threadLimit:(int)arg2;
- (BOOL)isDearchivableFast:(id)arg1;
- (BOOL)isDearchivable:(id)arg1 whichController:(id *)arg2 isPrimaryArchive:(BOOL)arg3;
- (void)dearchiveIntermediateFileIfNecessary:(id)arg1;
- (void)dearchiveItem:(id)arg1 withController:(id)arg2 isIntermediateItem:(BOOL)arg3;
- (void)dearchiveItem:(id)arg1 withController:(id)arg2;
- (void)dearchiveItem:(id)arg1;
- (void)archiveItem:(id)arg1;
- (void)dealWithFiles:(id)arg1;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (void)doArchiveFile:(id)arg1;
- (BOOL)panel:(id)arg1 shouldShowFilename:(id)arg2;
- (void)doUnarchiveFile:(id)arg1;
- (void)showPreferences:(id)arg1;
- (void)showAboutBox:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

