//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (CalClassAdditions)
+ (id)davCompatibleFilenameForFilename:(id)arg1;
+ (id)URLWithAddressBookUID:(id)arg1;
- (id)hostWithoutWWW;
- (BOOL)isEqualToURLIgnoringScheme:(id)arg1;
- (BOOL)compareToLocalURL:(id)arg1;
- (BOOL)compareToLocalString:(id)arg1;
- (BOOL)isOnRemoteFileSystem;
- (id)unquotedPassword;
- (id)pathDecodedAndWithoutTrailingSlashRemoved;
- (id)pathWithoutTrailingRemovingSlash;
- (BOOL)isEqualToURL:(id)arg1;
- (id)serverURL;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)queryParameters;
- (id)initWithCalDirtyString:(id)arg1;
@end

