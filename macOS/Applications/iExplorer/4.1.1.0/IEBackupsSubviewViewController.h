//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class IEBackupFSI, IETab, IETabView;

__attribute__((visibility("hidden")))
@interface IEBackupsSubviewViewController : NSViewController
{
    IETabView *parentTabView;
    IETab *parentTab;
    IEBackupFSI *_backupRootFSI;
    _Bool hasLoadedForCurrent;
}

+ (void)setAllToNilWithBackup:(id)arg1;
- (void).cxx_destruct;
- (id)currentBackupFSI;
- (void)loadDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadDatabase;
- (id)initWithParentTab:(id)arg1;
- (void)setRootBackupFSI:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setRootBackupFSI:(id)arg1;
- (id)rootBackupFSI;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 tab:(id)arg2;

@end

