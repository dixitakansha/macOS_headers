//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSBatchDeleteRequest : NSPersistentStoreRequest
{
    unsigned long long _resultType;
    NSFetchRequest *_deleteTarget;
    long long _flags;
}

@property unsigned long long resultType; // @synthesize resultType=_resultType;
- (BOOL)_secureOperation;
- (void)_setSecureOperation:(BOOL)arg1;
- (id)description;
@property(readonly, copy) NSFetchRequest *fetchRequest;
- (unsigned long long)requestType;
- (void)dealloc;
- (id)initWithFetchRequest:(id)arg1;
- (id)initWithObjectIDs:(id)arg1;
- (BOOL)shouldPerformSecureOperation;
- (void)setShouldPerformSecureOperation:(BOOL)arg1;

@end

