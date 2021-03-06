//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InstantMessage/IMFileTransferCenter.h>

#import "NSOpenSavePanelDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;

@interface FileTransferCenter : IMFileTransferCenter <NSOpenSavePanelDelegate>
{
    NSMutableDictionary *_visibleTransfers;
}

+ (Class)fileTransferClass;
+ (void)initialize;
- (BOOL)doesUserReallyWantToGoOffline;
- (void)sendFileURLs:(id)arg1 toIMHandle:(id)arg2 showManagerWindow:(BOOL)arg3;
- (void)askAndSendFilesOnPasteboard:(id)arg1 toIMHandle:(id)arg2;
- (void)askAndSendFileURLs:(id)arg1 toIMHandle:(id)arg2;
- (void)selectAndSendFileToIMHandle:(id)arg1 window:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)selectAndSendFileToIMHandle:(id)arg1 window:(id)arg2;
- (void)clearFinishedTransfers;
@property(readonly, nonatomic) NSArray *orderedFileTransfers;
- (void)_handleTransferUpdated:(id)arg1;
- (void)_handleTransferRemoved:(id)arg1;
- (void)_handleTransferCreated:(id)arg1;
- (void)removeTransfer:(id)arg1;
- (void)removeTransferFromManager:(id)arg1;
- (void)_displayNameUpdated:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isTransferVisible:(id)arg1;
- (void)_blockUntilTransferDataRetreived;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

