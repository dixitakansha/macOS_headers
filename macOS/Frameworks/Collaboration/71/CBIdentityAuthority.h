//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CBIdentityAuthority : NSObject
{
    id _reserved[2];
}

+ (id)identityAuthorityWithCSIdentityAuthority:(struct __CSIdentityAuthority *)arg1;
+ (id)defaultIdentityAuthority;
+ (id)managedIdentityAuthority;
+ (id)localIdentityAuthority;
- (id)localizedName;
- (struct __CSIdentityAuthority *)CSIdentityAuthority;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCSIdentityAuthority:(struct __CSIdentityAuthority *)arg1;

@end

