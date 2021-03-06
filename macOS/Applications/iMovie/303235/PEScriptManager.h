//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSMenuDelegate-Protocol.h"

@class NSDate, NSMenu, NSString;

@interface PEScriptManager : NSObject <NSMenuDelegate>
{
    NSDate *appScriptsFolderModDate;
    NSDate *userScriptsFolderModDate;
    NSDate *computerScriptsFolderModDate;
    NSDate *networkScriptsFolderModDate;
    NSDate *appSupportExtrasScriptsFolderModDate;
    BOOL appScriptsFolderExists;
    BOOL userScriptsFolderExists;
    BOOL computerScriptsFolderExists;
    BOOL networkScriptsFolderExists;
    BOOL appSupportExtrasScriptsFolderExists;
    BOOL needsRefresh;
    NSMenu *_scriptMenu;
}

+ (id)userScriptsPath;
+ (id)sharedManager;
- (void)runPythonScript:(id)arg1;
- (void)executeScript:(id)arg1;
- (void)openScriptsFolder:(id)arg1;
- (void)scriptDirectoryDidChange:(id)arg1;
- (void)sendScriptDirectoryDidChangeAppleEvent;
- (void)scriptDidExecute:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)populateMenu:(id)arg1 atPath:(id)arg2 forMainMenu:(BOOL)arg3;
- (void)rebuildScriptMenu:(id)arg1 forMainMenu:(BOOL)arg2;
- (void)rebuildScriptMenu:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)scriptMenu;
- (void)setScriptMenu:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

