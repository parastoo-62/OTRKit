//
//  NSData+OTRDATA.h
//  Pods
//
//  Created by Christopher Ballinger on 1/12/15.
//
//

#import <Foundation/Foundation.h>

@interface NSData (OTRDATA)

/** Returns SHA-1 Digest of NSData */
- (NSData*) otr_SHA1;

/** Returns hexadecimal string of NSData. Empty string if data is empty. */
- (NSString*) otr_hexString;

@end
