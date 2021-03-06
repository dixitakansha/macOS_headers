//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ABAccountRepository, NSString;

__attribute__((visibility("hidden")))
@interface ABAccountMigrationOperation : NSOperation
{
    ABAccountRepository *_accountRepository;
    NSString *_originAccountIdentifier;
    NSString *_destinationAccountIdentifier;
    BOOL _mergeData;
    BOOL _deleteOriginalData;
    CDUnknownBlockType _errorHandler;
}

@property BOOL deleteOriginalData; // @synthesize deleteOriginalData=_deleteOriginalData;
@property BOOL mergeData; // @synthesize mergeData=_mergeData;
@property(copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
- (id)makePersistentStoreCoordinatorCacheWithAccounts:(id)arg1;
- (id)makeAddressBookWithAccounts:(id)arg1;
- (void)main;
- (void)dealloc;
- (id)initWithAccountRepository:(id)arg1 originAccountIdentifier:(id)arg2 destinationAccountIdentifier:(id)arg3;

@end

