//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/NSCopying-Protocol.h>

@class NSString;

@interface CNAutocompleteFetchRequest : NSObject <NSCopying>
{
    NSString *_searchString;
    NSString *_priorityDomainForSorting;
    unsigned long long _searchType;
    NSString *_sendingAddress;
    BOOL _includeContacts;
    BOOL _includeRecents;
    BOOL _includeServers;
}

+ (id)searchablePropertiesForSearchType:(unsigned long long)arg1;
+ (id)request;
@property BOOL includeServers; // @synthesize includeServers=_includeServers;
@property BOOL includeRecents; // @synthesize includeRecents=_includeRecents;
@property BOOL includeContacts; // @synthesize includeContacts=_includeContacts;
@property(copy) NSString *sendingAddress; // @synthesize sendingAddress=_sendingAddress;
@property unsigned long long searchType; // @synthesize searchType=_searchType;
@property(copy) NSString *priorityDomainForSorting; // @synthesize priorityDomainForSorting=_priorityDomainForSorting;
@property(copy) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (id)searchTypeDebugString;
- (id)includeDebugString;
- (id)description;
- (BOOL)canExecute;
- (id)executeWithDelegate:(id)arg1 configuration:(id)arg2;
- (id)executeWithDelegate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

