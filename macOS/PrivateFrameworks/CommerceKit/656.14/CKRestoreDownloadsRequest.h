//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <StoreFoundation/SSRequest.h>

@class ISServiceProxy, NSArray;

@interface CKRestoreDownloadsRequest : SSRequest
{
    NSArray *_archivedFiles;
    ISServiceProxy *_serviceProxy;
    BOOL _userInitiated;
}

@property BOOL userInitiated; // @synthesize userInitiated=_userInitiated;
- (void).cxx_destruct;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id *)arg2;
- (id)initWithArchivedFiles:(id)arg1;

@end

