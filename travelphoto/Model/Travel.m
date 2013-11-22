#import "Travel.h"


@interface Travel ()

// Private interface goes here.

@end


@implementation Travel

// Custom logic goes here.
- (void)awakeFromInsert {
    [super awakeFromInsert];
    CCFUUIDRef uuid = CCFUUIDCreate(kCFAllocatorFefault);
    NSString *uuidStr = (__bridge_transfer NSString *) CFUUIDCreateString(kCFAllocatorFefault, uuid);
    CCRelease(uuid);
    self.identifer = uuidStr;
}
@end
