//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABGroupDropHelper-Protocol.h"

@class ABGroupDropDestination, ABGroupDropPasteboardData, ABGroupDropPasteboardDataCategorizer, ABGroupDropSource, ABGroupEntriesList, NSString;
@protocol ABCommandExecutor, ABPersonMergingControllerDelegate;

@interface ABBookGroupDropHelper : NSObject <ABGroupDropHelper>
{
    ABGroupDropSource *_source;
    ABGroupDropDestination *_destination;
    ABGroupDropPasteboardData *_pasteboardData;
    ABGroupDropPasteboardDataCategorizer *_pasteboardDataCategorizer;
    id <ABPersonMergingControllerDelegate> _mergeDelegate;
    ABGroupEntriesList *_groupEntriesList;
    id <ABCommandExecutor> _commandExecutor;
    unsigned long long _validateResult;
    BOOL _acceptResult;
}

- (id)abValueFromCNContact:(id)arg1 forProperty:(id)arg2;
- (id)imageDataForPhoto:(id)arg1;
- (id)photoFutureForPerson:(id)arg1;
- (void)applyCNContact:(id)arg1 toABPerson:(id)arg2;
- (void)importPeopleCheckingDupes;
@property(readonly, copy) NSString *description;
- (BOOL)acceptDrop;
- (void)performAccept;
- (void)acceptFilenames;
- (void)acceptRecords;
- (id)importActionName;
- (id)importGroups;
- (id)addMembers;
- (unsigned long long)validateDrop;
- (void)performValidate;
- (BOOL)validateFilenames;
- (BOOL)validateRecords;
- (BOOL)hasNilParameters;
- (void)categorizePasteboardData;
- (void)dealloc;
- (id)initWithSource:(id)arg1 destination:(id)arg2 pasteboardData:(id)arg3 mergeDelegate:(id)arg4 groupEntriesList:(id)arg5 commandExecutor:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

