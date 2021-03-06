//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSMenuDelegate-Protocol.h"

@class NSMenu, NSMenuItem, NSString;

@interface PEWorkspacesMenuDelegate : NSObject <NSMenuDelegate>
{
    NSMenu *workspacesMenu;
    NSMenuItem *workspacesSeparator;
}

@property(retain, nonatomic) NSMenuItem *workspacesSeparator; // @synthesize workspacesSeparator;
@property(retain, nonatomic) NSMenu *workspacesMenu; // @synthesize workspacesMenu;
- (void)populateWorkspacesMenu:(id)arg1 withSeparator:(id)arg2;
- (void)partialPopulateWorkspacesMenu:(id)arg1 withDirectory:(id)arg2 keyboardShortcutIndex:(unsigned long long *)arg3;
- (id)nextWorkspaceKeyEquivalent:(unsigned long long *)arg1;
- (unsigned long long)nextWorkspaceKeyModifierMask:(unsigned long long)arg1;
- (void)stripMenuItemsBefore:(id)arg1 forMenu:(id)arg2;
- (void)chooseWorkspace:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

