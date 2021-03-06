//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PTYSession, PseudoTerminal, iTermFullScreenWindowManager, iTermRestorableSession;

@interface iTermController : NSObject
{
    NSMutableArray *_restorableSessions;
    NSMutableArray *_currentRestorableSessionsStack;
    NSMutableArray *_terminalWindows;
    PseudoTerminal *_frontTerminalWindowController;
    iTermFullScreenWindowManager *_fullScreenWindowManager;
    BOOL _willPowerOff;
    BOOL _arrangeHorizontallyPendingFullScreenTransitions;
    BOOL _startingUp;
    BOOL _applicationIsQuitting;
}

+ (void)switchToSpaceInBookmark:(id)arg1;
+ (unsigned long long)shard;
+ (id)installationId;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;
@property(nonatomic) BOOL applicationIsQuitting; // @synthesize applicationIsQuitting=_applicationIsQuitting;
@property(nonatomic) BOOL startingUp; // @synthesize startingUp=_startingUp;
- (void)workspaceWillPowerOff:(id)arg1;
- (void)removeTerminalWindow:(id)arg1;
- (void)addTerminalWindow:(id)arg1;
@property(nonatomic) PseudoTerminal *currentTerminal;
- (id)terminals;
@property(readonly, nonatomic) NSArray *keyTerminalWindows;
@property(readonly, nonatomic) PseudoTerminal *hotkeyWindow;
@property(readonly, nonatomic) BOOL anyWindowIsMain;
@property(readonly, nonatomic) BOOL keystrokesBeingStolen;
- (BOOL)anyOrderedWindowIsKey;
- (void)killRestorableSessions;
@property(readonly, nonatomic) BOOL hasRestorableSession;
- (id)popRestorableSession;
- (void)removeSessionFromRestorableSessions:(id)arg1;
@property(readonly, nonatomic) iTermRestorableSession *currentRestorableSession;
- (void)commitAndPopCurrentRestorableSession;
- (void)pushCurrentRestorableSession:(id)arg1;
- (void)addRestorableSession:(id)arg1;
@property(nonatomic) BOOL selectionRespectsSoftBoundaries;
- (void)refreshSoftwareUpdateUserDefaults;
- (void)dumpViewHierarchy;
- (id)terminalWithGuid:(id)arg1;
- (id)terminalWithNumber:(int)arg1;
- (int)allocateWindowNumber;
- (id)terminalAtIndex:(int)arg1;
- (unsigned long long)indexOfTerminal:(id)arg1;
@property(readonly, nonatomic) int numberOfTerminals;
- (id)frontTextView;
- (void)showAlertForScript:(id)arg1 error:(id)arg2;
- (void)launchScript:(id)arg1;
- (id)launchBookmark:(id)arg1 inTerminal:(id)arg2 withURL:(id)arg3 isHotkey:(BOOL)arg4 makeKey:(BOOL)arg5 canActivate:(BOOL)arg6 command:(id)arg7 block:(CDUnknownBlockType)arg8;
- (id)profile:(id)arg1 modifiedToOpenURL:(id)arg2 forObjectType:(long long)arg3;
- (id)launchBookmark:(id)arg1 inTerminal:(id)arg2;
- (void)makeTerminalWindowFullScreen:(id)arg1;
- (id)openTmuxIntegrationWindowUsingProfile:(id)arg1;
- (id)defaultBookmark;
- (void)reloadAllBookmarks;
- (int)windowTypeForBookmark:(id)arg1;
- (void)irAdvance:(int)arg1;
- (void)addBookmarksToMenu:(id)arg1 withSelector:(SEL)arg2 openAllSelector:(SEL)arg3 startingAt:(int)arg4;
- (void)newSessionsInNewWindow:(id)arg1;
- (void)newSessionsInWindow:(id)arg1;
- (void)getBookmarksInMenu:(id)arg1 usedGuids:(id)arg2 bookmarks:(id)arg3;
- (id)bookmarksInMenu:(id)arg1;
- (void)openNewSessionsFromMenu:(id)arg1 inNewWindow:(BOOL)arg2;
- (BOOL)shouldOpenManyProfiles:(int)arg1;
- (id)terminalWithSession:(id)arg1;
- (id)terminalWithTab:(id)arg1;
- (void)_addBookmarksForTag:(id)arg1 toMenu:(id)arg2 target:(id)arg3 withShortcuts:(BOOL)arg4 selector:(SEL)arg5 alternateSelector:(SEL)arg6 openAllSelector:(SEL)arg7;
- (void)_addBookmark:(id)arg1 toMenu:(id)arg2 target:(id)arg3 withShortcuts:(BOOL)arg4 selector:(SEL)arg5 alternateSelector:(SEL)arg6;
- (void)terminalWillClose:(id)arg1;
@property(readonly, nonatomic) PTYSession *sessionWithMostRecentSelection;
- (void)arrangeHorizontally;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)arrangeTerminals:(id)arg1 inFrame:(struct CGRect)arg2;
- (id)terminalsInScreen:(id)arg1;
- (void)loadWindowArrangementWithName:(id)arg1;
- (void)tryOpenArrangement:(id)arg1;
- (void)saveWindowArrangement:(BOOL)arg1;
- (id)showAlertWithText:(id)arg1 defaultInput:(id)arg2;
- (void)nextTerminal;
- (void)previousTerminal;
- (id)terminalsSortedByNumber;
- (void)newSession:(id)arg1 possiblyTmux:(BOOL)arg2;
- (void)newSessionWithSameProfile:(id)arg1;
- (void)noAction:(id)arg1;
- (void)newSessionInWindowAtIndex:(id)arg1;
- (BOOL)terminalIsObscured:(id)arg1;
- (void)newSessionInTabAtIndex:(id)arg1;
- (void)newWindow:(id)arg1 possiblyTmux:(BOOL)arg2;
- (void)newWindow:(id)arg1;
- (id)anyTmuxSession;
@property(readonly, nonatomic) BOOL haveTmuxConnection;
- (void)updateWindowTitles;
- (id)keyTerminalWindow;
- (void)dealloc;
@property(readonly, nonatomic) BOOL shouldLeaveSessionsRunningOnQuit;
@property(readonly, nonatomic) BOOL willRestoreWindowsAtNextLaunch;
- (id)init;

@end

