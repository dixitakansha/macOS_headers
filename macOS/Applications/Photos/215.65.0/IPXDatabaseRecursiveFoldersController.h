//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXDatabaseQueryDrivenObjectsController.h"

#import "RDLibraryMessagesReceiver-Protocol.h"

@class NSString, RDFolder;

@interface IPXDatabaseRecursiveFoldersController : IPXDatabaseQueryDrivenObjectsController <RDLibraryMessagesReceiver>
{
    RDFolder *_parentDatabaseFolder;
}

+ (id)databaseModelIdUUIDPrefix;
- (void).cxx_destruct;
- (void)libraryDeletedFolderIds:(id)arg1 fromDatabase:(id)arg2;
- (void)libraryUpdatedFolder:(id)arg1 forKeyPaths:(id)arg2;
- (void)libraryCreatedFolder:(id)arg1;
- (id)objectsCollectionName;
- (id)initialObjectsCollectionQueryFilter;
- (id)parentDatabaseFolder;
- (id)initWithDatabase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

